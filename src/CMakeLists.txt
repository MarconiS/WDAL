set(src
    sample_block.cpp
    )

add_library(wdal-lib ${src})
target_include_directories(wdal-lib
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include)
target_compile_options(wdal-lib
    PUBLIC
        -std=c++11)
set_target_properties(wdal-lib PROPERTIES
    OUTPUT_NAME wdal)
