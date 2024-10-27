#include <gtest/gtest.h>

#include "169_majority_element.hpp"
TEST(_169_majority_element, test_1) {
  Solution s;
  std::vector<int> nums = {3, 2, 3};
  int k = s.majorityElement(nums);
  int expected_k = 3;
  EXPECT_EQ(k, expected_k);
}

TEST(_169_majority_element, test_2) {
  Solution s;
  std::vector<int> nums = {2,2,1,1,1,2,2};
  int k = s.majorityElement(nums);
  int expected_k = 2;
  EXPECT_EQ(k, expected_k);
}