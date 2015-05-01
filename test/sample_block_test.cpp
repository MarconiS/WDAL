#include <wdal/sample_block.hpp>

#include <gtest/gtest.h>


namespace wdal {


TEST(SampleBlock, Attributes) {
    SampleBlock block(1);
    EXPECT_DOUBLE_EQ(1, block.time_offset);
    EXPECT_TRUE(block.samples.empty());
    EXPECT_TRUE(block.is_dummy_block());
}
}
