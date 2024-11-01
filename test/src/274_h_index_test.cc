#include "274_h_index.hpp"

#include <gtest/gtest.h>

using namespace __274;

TEST(_274_h_index, test_1) {
  Solution s;
  vector<int> citations = {3, 0, 6, 1, 5};
  int expected_output = 3;
  int output = s.hIndex(citations);
  EXPECT_EQ(output, expected_output);
}

TEST(_274_h_index, test_2) {
  Solution s;
  vector<int> citations = {1, 3, 1};
  int expected_output = 1;
  int output = s.hIndex(citations);
  EXPECT_EQ(output, expected_output);
}