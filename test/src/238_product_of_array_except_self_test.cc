#include <gtest/gtest.h>

#include "238_product_of_array_except_self.hpp"

using namespace __238;

TEST(_238_product_of_array_except_self, test_1) {
  Solution s;
  vector<int> input = {1,2,3,4};
  vector<int> expected_output = {24,12,8,6};
  vector<int> output = s.productExceptSelf(input);
  for(int i = 0; i < input.size(); i++) {
    EXPECT_EQ(output[i], expected_output[i]);
  }
}

TEST(_238_product_of_array_except_self, test_2) {
  Solution s;
  vector<int> input = {-1,1,0,-3,3};
  vector<int> expected_output = {0,0,9,0,0};
  vector<int> output = s.productExceptSelf(input);
  for(int i = 0; i < input.size(); i++) {
    EXPECT_EQ(output[i], expected_output[i]);
  }
}