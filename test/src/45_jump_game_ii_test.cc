#include "45_jump_game_ii.hpp"

#include <gtest/gtest.h>

using namespace __45;

TEST(_45_jump_game_ii, test_1) {
  Solution s;
  vector<int> nums = {2, 3, 1, 1, 4};
  int expected_output = 2;
  int output = s.jump(nums);
  EXPECT_EQ(output, expected_output);
}

TEST(_45_jump_game_ii, test_2) {
  Solution s;
  vector<int> nums = {2, 3, 0, 1, 4};
  int expected_output = 2;
  int output = s.jump(nums);
  EXPECT_EQ(output, expected_output);
}

TEST(_45_jump_game_ii, test_3) {
  Solution s;
  vector<int> nums = {1, 2, 1, 1, 1};
  int expected_output = 3;
  int output = s.jump(nums);
  EXPECT_EQ(output, expected_output);
}
