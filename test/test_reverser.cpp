#include "gtest/gtest.h"
#include "reverser.h"

TEST(test1, reverse)
{
	std::string word = "Niroigen";
	std::string reversed_word = reverser(word);
    ASSERT_EQ(reversed_word, "negioriN");
}

TEST(test2, reverse)
{
	std::string word = "hello";
	std::string reversed_word = reverser(word);
    ASSERT_EQ(reversed_word, "olleh");
}

TEST(test3, reverse)
{
	std::string word = "what's up";
	std::string reversed_word = reverser(word);
    ASSERT_EQ(reversed_word, "pu s'tahw");
}