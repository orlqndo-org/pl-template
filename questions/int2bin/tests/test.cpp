#include <gtest/gtest.h>
#include "../student/code.cpp"

TEST(Int2BinTest, HandlesZero) {
  EXPECT_EQ(int2bin(0), "0");
}

TEST(Int2BinTest, HandlesPositiveNumber) {
  EXPECT_EQ(int2bin(5), "101");
}

TEST(Int2BinTest, HandlesLargerNumber) {
  EXPECT_EQ(int2bin(255), "11111111");
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}