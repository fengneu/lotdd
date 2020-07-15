//
// Created by vagrant on 7/15/20.
//

#include <gtest/gtest.h>
#include "sample.hpp"

TEST(Add, case1)
{
    EXPECT_LT(-2, add(1, 2));
    EXPECT_EQ(-1, add(1, 2));
    ASSERT_LT(-2, add(1, 2));
    ASSERT_EQ(-1, add(1, 2));
}
