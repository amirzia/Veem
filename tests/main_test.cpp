
#include <gtest/gtest.h>

#include "basic_text.cpp"

// Demonstrate some basic assertions.
TEST(Backend, FullTextTest) {
  const std::string str{ "salam" };
  BasicText b_text{ str };
  EXPECT_TRUE(b_text.get_whole_text() == str);
}
