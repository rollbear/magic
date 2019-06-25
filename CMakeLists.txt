cmake_minimum_required(VERSION 3.8.0)

project( MagicProject )

add_executable( magic 
    main.cpp 
)

set_property( TARGET magic PROPERTY CXX_STANDARD 17 )
