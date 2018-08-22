#include "gtest/gtest.h"
#include "taran_add.h"

TEST(example, add)
{
    int total;
    total = sum(1, 2);
    ASSERT_EQ(total, 3);
}