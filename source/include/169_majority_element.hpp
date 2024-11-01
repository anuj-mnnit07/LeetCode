#ifndef __169_MAJORITY_ELEMENT_HPP__
#define __169_MAJORITY_ELEMENT_HPP__

#include <unordered_map>
#include <vector>
using namespace std;

namespace __169 {

class Solution {
 public:
  int majorityElement(vector<int>& nums) {
    unordered_map<int, int> map;
    for (const auto num : nums) {
      if (map.find(num) != map.end()) {
        map[num]++;
      } else {
        map.insert({num, 1});
      }
    }
    int max = 0;
    int max_element = nums[0];
    for (const auto p : map) {
      if (max < p.second) {
        max = p.second;
        max_element = p.first;
      }
    }
    return max_element;
  }
};

}  // namespace __169
#endif
