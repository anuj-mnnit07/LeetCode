#include <gtest/gtest.h>

#include "189_rotate_array.hpp"
TEST(_189_rotate_array, test_1) {
  Solution s;
  std::vector<int> input = {1,2,3,4,5,6,7};
  int k = 3;
  s.rotate(input, k);
  std::vector<int> output = {5,6,7,1,2,3,4};
  for(int i = 0; i < output.size(); i++) {
    EXPECT_EQ(output[i], input[i]);
  }
}

TEST(_189_rotate_array, test_2) {
  Solution s;
  std::vector<int> input = {-1,-100,3,99};
  int k = 2;
  s.rotate(input, k);
  std::vector<int> output = {3,99,-1,-100};
  for(int i = 0; i < output.size(); i++) {
    EXPECT_EQ(output[i], input[i]);
  }
}
