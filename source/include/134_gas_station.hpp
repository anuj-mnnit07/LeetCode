#ifndef __134_GAS_STATION_HPP__
#define __134_GAS_STATION_HPP__

#include <vector>
#include <numeric>
using namespace std;
namespace __134 {

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        auto sum_gas = reduce(gas.begin(), gas.end());
        auto sum_cost = reduce(cost.begin(), cost.end());
        if(sum_gas < sum_cost) return -1;
        int start = 0;
        int total_cost = 0;
        for(int i = 0; i < gas.size(); i++) {
            total_cost += (gas[i] - cost[i]);
            if(total_cost < 0) {
                start = i + 1;
                total_cost = 0;
            }
        }
        return start;
    }
};

} // namespace __134
#endif // __134_GAS_STATION_HPP__
