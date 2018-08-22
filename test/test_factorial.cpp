#include "gtest/gtest.h"
#include "factorial.h"

TEST(test1, factorial)
{
    int fact = factorial(5);
    ASSERT_EQ(fact, 120);
}

TEST(test2, factorial)
{
    int fact = factorial(0);
    ASSERT_EQ(fact, 1);
}

TEST(test3, factorial)
{
    int fact = factorial(-10);
    ASSERT_EQ(fact, 1);
}

TEST(test4, factorial)
{
    int fact = factorial(1);
    ASSERT_EQ(fact, 1);
}

TEST(test5, factorial)
{
    int fact = factorial(-10);
    ASSERT_EQ(fact, 1);
}
