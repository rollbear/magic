cmake_minimum_required(VERSION 3.8.0)

project( IdentityTheftProject )

if( WIN32 )
    add_definitions(
        -D IDENTITY_THEFT_DLL
    )
endif()

add_executable( identityTheft
    thief.cpp 
)

add_library( holder SHARED
    holder.cpp
)

option(ASAN "build with ASAN" OFF)
if (ASAN)
  # Run built binary with
  #
  #     ASAN_OPTIONS=detect_odr_violation=2,use_odr_indicator=true
  #
  # to see ODR violation
  target_link_options(holder PUBLIC -fsanitize=address)
  target_compile_options(holder PUBLIC -fsanitize=address)
endif()

target_link_libraries( identityTheft
    holder
)

set_property( TARGET identityTheft PROPERTY CXX_STANDARD 17 )
set_property( TARGET holder        PROPERTY CXX_STANDARD 17 )
