#include <gtest/gtest.h>

#include "121_best_time_to_buy_and_sell_stock.hpp"
TEST(_121_best_time_to_buy_and_sell_stock, test_1) {
  Solution s;
  vector<int> input = {7,1,5,3,6,4};
  int output = s.maxProfit(input);
  int expected_output = 5;
  EXPECT_EQ(output, expected_output);
}


TEST(_121_best_time_to_buy_and_sell_stock, test_2) {
  Solution s;
  vector<int> input = {7,6,4,3,1};
  int output = s.maxProfit(input);
  int expected_output = 0;
  EXPECT_EQ(output, expected_output);
}