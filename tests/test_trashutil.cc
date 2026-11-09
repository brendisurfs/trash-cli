#include <gtest/gtest.h>

TEST(HelloTest, BasicAssertions) {
  EXPECT_STRNE("Hi", "howdy");
  EXPECT_EQ(2, 2);
}
