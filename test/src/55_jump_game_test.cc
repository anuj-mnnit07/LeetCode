#include "55_jump_game.hpp"

#include <gtest/gtest.h>
TEST(_55_jump_game, test_1) {
  vector<int> nums = {2, 3, 1, 1, 4};
  bool expected_output = true;
  Solution s;
  int output = s.canJump(nums);
  EXPECT_EQ(expected_output, output);
}

TEST(_55_jump_game, test_2) {
  vector<int> nums = {3, 2, 1, 0, 4};
  bool expected_output = false;
  Solution s;
  int output = s.canJump(nums);
  EXPECT_EQ(expected_output, output);
}

TEST(_55_jump_game, test_3) {
  vector<int> nums = {0};
  bool expected_output = true;
  Solution s;
  int output = s.canJump(nums);
  EXPECT_EQ(expected_output, output);
}

TEST(_55_jump_game, test_4) {
  vector<int> nums = {1};
  bool expected_output = true;
  Solution s;
  int output = s.canJump(nums);
  EXPECT_EQ(expected_output, output);
}

TEST(_55_jump_game, test_5) {
  vector<int> nums = {2, 0};
  bool expected_output = true;
  Solution s;
  int output = s.canJump(nums);
  EXPECT_EQ(expected_output, output);
}

TEST(_55_jump_game, test_6) {
  vector<int> nums = {2, 5, 0, 0};
  bool expected_output = false;
  Solution s;
  int output = s.canJump(nums);
  EXPECT_EQ(expected_output, output);
}
