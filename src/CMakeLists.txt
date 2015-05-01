set(src
    sample_block.cpp
    )

add_library(wdal-lib ${src})
set_target_properties(wdal-lib PROPERTIES
    OUTPUT_NAME wdal)
