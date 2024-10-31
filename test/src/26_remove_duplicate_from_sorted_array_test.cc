#include "26_remove_duplicate_from_sorted_array.hpp"

#include <gtest/gtest.h>

TEST(_26_remove_duplicate_from_sorted_array, test_1) {
  Solution s;
  std::vector<int> nums = {1, 1, 2};
  std::vector<int> expected_out = {1, 2};
  int k = s.removeDuplicates(nums);
  EXPECT_EQ(k, expected_out.size());
  for (int i = 0; i < k; i++) {
    EXPECT_EQ(nums[i], expected_out[i]);
  }
}

TEST(_26_remove_duplicate_from_sorted_array, test_2) {
  Solution s;
  std::vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
  std::vector<int> expected_out = {0, 1, 2, 3, 4};
  int k = s.removeDuplicates(nums);
  EXPECT_EQ(k, expected_out.size());
  for (int i = 0; i < k; i++) {
    EXPECT_EQ(nums[i], expected_out[i]);
  }
}
