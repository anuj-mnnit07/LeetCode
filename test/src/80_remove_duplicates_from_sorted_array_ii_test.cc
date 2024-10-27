#include <gtest/gtest.h>

#include "80_remove_duplicates_from_sorted_array_ii.hpp"
TEST(_80_remove_duplicates_from_sorted_array_ii, test_1) {
  Solution s;
  vector<int> input = {1,1,1,2,2,3};
  vector<int> expected_out = {1,1,2,2,3};
  int k = s.removeDuplicates1(input);
  EXPECT_EQ(k, expected_out.size());
  for(int i = 0; i < k; i++) {
    EXPECT_EQ(input[i], expected_out[i]);
  }
}

TEST(_80_remove_duplicates_from_sorted_array_ii, test_2) {
  Solution s;
  vector<int> input = {0,0,1,1,1,1,2,3,3};
  vector<int> expected_out = {0,0,1,1,2,3,3};
  int k = s.removeDuplicates1(input);
  EXPECT_EQ(k, expected_out.size());
  for(int i = 0; i < k; i++) {
    EXPECT_EQ(input[i], expected_out[i]);
  }
}

TEST(_80_remove_duplicates_from_sorted_array_ii, test_3) {
  Solution s;
  vector<int> input = {1, 2, 3};
  vector<int> expected_out = {1, 2, 3};
  int k = s.removeDuplicates1(input);
  EXPECT_EQ(k, expected_out.size());
  for(int i = 0; i < k; i++) {
    EXPECT_EQ(input[i], expected_out[i]);
  }
}

