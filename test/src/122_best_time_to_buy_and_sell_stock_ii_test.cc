#include "122_best_time_to_buy_and_sell_stock_ii.hpp"

#include <gtest/gtest.h>
TEST(_122_best_time_to_buy_and_sell_stock_ii, test_1) {
  Solution s;
  vector<int> prices = {7, 1, 5, 3, 6, 4};
  int expected_max_profit = 7;
  int max_profit = s.maxProfit_ii(prices);
  EXPECT_EQ(expected_max_profit, max_profit);
}

TEST(_122_best_time_to_buy_and_sell_stock_ii, test_2) {
  Solution s;
  vector<int> prices = {1, 2, 3, 4, 5};
  int expected_max_profit = 4;
  int max_profit = s.maxProfit_ii(prices);
  EXPECT_EQ(expected_max_profit, max_profit);
}

TEST(_122_best_time_to_buy_and_sell_stock_ii, test_3) {
  Solution s;
  vector<int> prices = {7, 6, 4, 3, 1};
  int expected_max_profit = 0;
  int max_profit = s.maxProfit_ii(prices);
  EXPECT_EQ(expected_max_profit, max_profit);
}
