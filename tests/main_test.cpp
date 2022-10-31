
#include <gtest/gtest.h>

#include "basic_text.cpp"

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);

  const std::string str{ "salam" };
  BasicText b_text{ str };
  EXPECT_TRUE(b_text.get_whole_text() == str);
}
