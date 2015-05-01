#include <wdal/pulse.hpp>

#include <wdal/sample_block.hpp>

#include <gtest/gtest.h>


namespace wdal
{


TEST(Pulse, TimeOffsetConstructor) {
    Pulse pulse(1.0);
    EXPECT_DOUBLE_EQ(pulse.time_external, 1.0);
    EXPECT_TRUE(pulse.reference_sample_block.is_dummy_block());
    EXPECT_EQ(pulse.origin, xyz_t(0, 0, 0));
    EXPECT_EQ(pulse.direction_vector, unit_vector_t(1, 0, 0));
    EXPECT_DOUBLE_EQ(1.0, pulse.scale_factor);
}


TEST(Pulse, ReferenceSampleBlockConstructor) {
    // TODO sampling interval
    SampleBlock reference_sample_block(0);
    reference_sample_block.samples.push_back(1);
    Pulse pulse(reference_sample_block);
    EXPECT_DOUBLE_EQ(pulse.time_external, 0.0);
    EXPECT_FALSE(pulse.reference_sample_block.is_dummy_block());
    EXPECT_EQ(pulse.origin, xyz_t(0, 0, 0));
    EXPECT_EQ(pulse.direction_vector, unit_vector_t(1, 0, 0));
    EXPECT_DOUBLE_EQ(1.0, pulse.scale_factor);
}


}
