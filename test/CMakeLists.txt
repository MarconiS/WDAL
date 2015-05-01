set(src
    sample_test.cpp
    )


add_executable(wdal-test ${src})
add_test(NAME wdal-test COMMAND wdal-test)
target_link_libraries(wdal-test
    PRIVATE
        wdal-lib
        gtest_main)
