#include <gtest/gtest.h>
#include "../student/code.cpp"

TEST(CountGreaterThanTest, NoElementsGreaterThanPivot) {
  std::vector<int> data = {1, 2, 3, 4, 5};
  EXPECT_EQ(countGreaterThan(data, 10), 0);
}

TEST(CountGreaterThanTest, AllElementsGreaterThanPivot) {
  std::vector<int> data = {11, 12, 13, 14, 15};
  EXPECT_EQ(countGreaterThan(data, 10), 5);
}

TEST(CountGreaterThanTest, MixedElements) {
  std::vector<int> data = {5, 15, 8, 20, 9, 25};
  EXPECT_EQ(countGreaterThan(data, 10), 3);
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}