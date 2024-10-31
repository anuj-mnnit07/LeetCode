#ifndef __122_BEST_TIME_TO_BUY_AND_SELL_STOCK_II_HPP__
#define __122_BEST_TIME_TO_BUY_AND_SELL_STOCK_II_HPP__

#include <vector>

using namespace std;

class Solution {
 public:
  int maxProfit_ii(vector<int>& prices) {
    int sell = 0;
    int profit = 0;
    for (int i = 1; i < prices.size(); i++) {
      if (prices[i] > prices[i - 1]) {
        profit += (prices[i] - prices[i - 1]);
      }
    }
    return profit;
  }
};

#endif
