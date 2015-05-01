#pragma once

#include <array>


namespace wdal {


struct xyz_t {
    xyz_t() : x(0), y(0), z(0) {}
    xyz_t(double x, double y, double z) : x(x), y(y), z(z) {}

    double x, y, z;
};


struct unit_vector_t : public xyz_t {
    using xyz_t::xyz_t;
    unit_vector_t() : xyz_t(1, 0, 0) {}
    // TODO some sort of checking on unit-ness?
};


inline bool operator==(const xyz_t& lhs, const xyz_t& rhs) {
    return lhs.x == rhs.x and lhs.y == rhs.y and lhs.z == rhs.z;
}


inline bool operator!=(const xyz_t& lhs, const xyz_t& rhs) {
    return !(lhs == rhs);
}
}
