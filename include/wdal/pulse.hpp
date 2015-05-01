#pragma once

#include <wdal/sample_block.hpp>
#include <wdal/types.hpp>


namespace wdal {


struct Pulse {

    explicit Pulse(double time)
        : time_external(time),
          reference_sample_block(),
          origin(0, 0, 0),
          direction_vector(1, 0, 0),
          scale_factor(1) {}
    explicit Pulse(SampleBlock block)
        : time_external(0),
          reference_sample_block(block),
          origin(0, 0, 0),
          direction_vector(1, 0, 0),
          scale_factor(1) {}

    double time_external;
    SampleBlock reference_sample_block;
    xyz_t origin;
    unit_vector_t direction_vector;
    double scale_factor;
};
}
