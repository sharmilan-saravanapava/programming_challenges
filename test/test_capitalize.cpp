#include "gtest/gtest.h"
#include "capitalize.h"

TEST(test1, capitalize)
{
	std::string word = "Niroigen";
	std::string reversed_word = capitalizer(word);
    ASSERT_EQ(reversed_word, "NIROIGEN");
}

TEST(test2, capitalize)
{
	std::string word = "hello";
	std::string reversed_word = capitalizer(word);
    ASSERT_EQ(reversed_word, "HELLO");
}

TEST(test3, capitalize)
{
	std::string word = "what's up";
	std::string reversed_word = capitalizer(word);
    ASSERT_EQ(reversed_word, "WHAT'S UP");
}