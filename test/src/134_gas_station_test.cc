#include <gtest/gtest.h>

#include "134_gas_station.hpp"

using namespace __134;

TEST(_134_gas_station, test_1) {
  Solution s;
  vector<int> gas = {1,2,3,4,5}, cost = {3,4,5,1,2};
  int expected_output = 3;
  int output = s.canCompleteCircuit(gas, cost);
  EXPECT_EQ(expected_output, output);
}

TEST(_134_gas_station, test_2) {
  Solution s;
  vector<int> gas = {2,3,4}, cost = {3,4,3};
  int expected_output = -1;
  int output = s.canCompleteCircuit(gas, cost);
  EXPECT_EQ(expected_output, output);
}
