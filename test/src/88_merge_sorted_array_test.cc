#include "88_merge_sorted_array.hpp"

#include <gtest/gtest.h>
TEST(_88_merge_sorted_array, test_1) {
  Solution s;
  std::vector<int> num1 = {1, 2, 3, 0, 0, 0};
  std::vector<int> num2 = {2, 5, 6};
  std::vector<int> expected_out = {1, 2, 2, 3, 5, 6};
  int m = 3, n = 3;
  s.merge(num1, m, num2, n);

  EXPECT_EQ(expected_out, num1);
}

TEST(_88_merge_sorted_array, test_2) {
  Solution s;
  std::vector<int> num1 = {1};
  std::vector<int> num2 = {};
  std::vector<int> expected_out = {1};
  int m = 1, n = 0;
  s.merge(num1, m, num2, n);

  EXPECT_EQ(expected_out, num1);
}

TEST(_88_merge_sorted_array, test_3) {
  Solution s;
  std::vector<int> num1 = {0};
  std::vector<int> num2 = {1};
  std::vector<int> expected_out = {1};
  int m = 0, n = 1;
  s.merge(num1, m, num2, n);

  EXPECT_EQ(expected_out, num1);
}
