#include <wdal/types.hpp>

#include <gtest/gtest.h>


namespace wdal {


TEST(Xyz, Equality) {
    xyz_t point(1, 2, 3);
    xyz_t other_equal(1, 2, 3);
    xyz_t other_not_equal_1(1, 2, 4);
    xyz_t other_not_equal_2(1, 4, 3);
    xyz_t other_not_equal_3(4, 2, 3);

    EXPECT_EQ(point, other_equal);
    EXPECT_NE(point, other_not_equal_1);
    EXPECT_NE(point, other_not_equal_2);
    EXPECT_NE(point, other_not_equal_3);
}
}
