#ifndef __122_BEST_TIME_TO_BUY_AND_SELL_STOCK_II_HPP__
#define __122_BEST_TIME_TO_BUY_AND_SELL_STOCK_II_HPP__

#include <vector>

using namespace std;

class Solution {
 public:
  int maxProfit_ii(vector<int>& prices) {
    int local_minima = prices[0];
    int local_maxima = prices[0];
    bool is_increasing = false;
    int max_profit = 0;
    for (int i = 1; i < prices.size();) {
      while (i < prices.size() && prices[i] > prices[i - 1]) {
        local_maxima = prices[i++];
      }

      max_profit += (local_maxima - local_minima);

      while (i < prices.size() && prices[i] <= prices[i - 1]) {
        local_minima = prices[i++];
        local_maxima = local_minima;
      }
    }
    return max_profit;
  }
};

#endif
