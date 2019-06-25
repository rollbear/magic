cmake_minimum_required(VERSION 3.8.0)

project( IdentityTheftProject )

add_definitions(
    -D IDENTITY_THEFT_DLL
)

add_executable( identityTheft
    thief.cpp 
)

add_library( holder SHARED
    holder.cpp
)

target_link_libraries( identityTheft
    holder
)

set_property( TARGET identityTheft PROPERTY CXX_STANDARD 17 )
set_property( TARGET holder        PROPERTY CXX_STANDARD 17 )
