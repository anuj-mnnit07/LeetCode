#include <gtest/gtest.h>

#include <algorithm>

#include "27_remove_element.hpp"
TEST(_27_remove_element, test_1) {
  Solution s;
  std::vector<int> nums = { 3, 2, 2, 3 };
  int val = 3;
  std::vector<int> expected_out = {2, 2};

  int k = s.removeElement(nums, val);
  std::sort(nums.begin(), nums.begin() + k);
  std::sort(expected_out.begin(), expected_out.end());
  for (int i = 0; i < k; i++) {
    EXPECT_EQ(nums[i], expected_out[i]);
  }
}

TEST(_27_remove_element, test_2) {
  Solution s;
  std::vector<int> nums = { 0,1,2,2,3,0,4,2 };
  int val = 2;
  std::vector<int> expected_out = { 0, 1, 3, 0, 4 };

  int k = s.removeElement(nums, val);
  std::sort(nums.begin(), nums.begin() + k);
  std::sort(expected_out.begin(), expected_out.end());
  for (int i = 0; i < k; i++) {
    EXPECT_EQ(nums[i], expected_out[i]);
  }
}

TEST(_27_remove_element, test_3) {
  Solution s;
  std::vector<int> nums = { };
  int val = 0;
  std::vector<int> expected_out = { };

  int k = s.removeElement(nums, val);
  std::sort(nums.begin(), nums.begin() + k);
  std::sort(expected_out.begin(), expected_out.end());
  for (int i = 0; i < k; i++) {
    EXPECT_EQ(nums[i], expected_out[i]);
  }
}

TEST(_27_remove_element, test_4) {
  Solution s;
  std::vector<int> nums = { 2, 2 };
  int val = 2;
  std::vector<int> expected_out = { };

  int k = s.removeElement(nums, val);
  std::sort(nums.begin(), nums.begin() + k);
  std::sort(expected_out.begin(), expected_out.end());
  for (int i = 0; i < k; i++) {
    EXPECT_EQ(nums[i], expected_out[i]);
  }
}
