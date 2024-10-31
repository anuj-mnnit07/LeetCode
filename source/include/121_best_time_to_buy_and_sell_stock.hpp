#ifndef __121_BEST_TIME_TO_BUY_AND_SELL_STOCK_HPP__
#define __121_BEST_TIME_TO_BUY_AND_SELL_STOCK_HPP__

#include <vector>
using namespace std;

class Solution {
 public:
  int maxProfit(vector<int>& prices) {
    if (prices.size() == 1) {
      return 0;
    }
    int min_price = prices[0];  // because max price in problem in 1e4
    int max_profit = 0;
    for (int i = 1; i < prices.size(); i++) {
      if (prices[i] < min_price) {
        min_price = prices[i];
      } else {
        int profit = prices[i] - min_price;
        if (profit > max_profit)
          max_profit = profit;
      }
    }
    return max_profit;
  }
};

#endif
