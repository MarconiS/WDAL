#pragma once

#include <vector>


namespace wdal {


struct SampleBlock {

    SampleBlock(double offset) : time_offset(offset) {}

    bool is_dummy_block() { return samples.empty(); }

    double time_offset;
    std::vector<uint16_t> samples;
};
}
