#include <gtest/gtest.h>
#include "../student/code.cpp"

TEST(ExtractGreaterThanTest, NoElementsGreaterThanPivot) {
  std::vector<int> data = {1, 2, 3, 4, 5};
  std::vector<int> expected = {};
  EXPECT_EQ(extractGreaterThan(data, 10), expected);
}

TEST(ExtractGreaterThanTest, AllElementsGreaterThanPivot) {
  std::vector<int> data = {11, 12, 13, 14, 15};
  std::vector<int> expected = {11, 12, 13, 14, 15};
  EXPECT_EQ(extractGreaterThan(data, 10), expected);
}

TEST(ExtractGreaterThanTest, MixedElements) {
  std::vector<int> data = {5, 15, 8, 20, 9, 25};
  std::vector<int> expected = {15, 20, 25};
  EXPECT_EQ(extractGreaterThan(data, 10), expected);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}