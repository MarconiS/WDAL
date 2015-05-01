set(src
    pulse_test.cpp
    sample_block_test.cpp
    types_test.cpp
    )


add_executable(wdal-test ${src})
add_test(NAME wdal-test COMMAND wdal-test)
target_link_libraries(wdal-test
    PRIVATE
        wdal-lib
        gtest_main)
target_include_directories(wdal-test
    PRIVATE
        ${gtest_SOURCE_DIR}/include)
