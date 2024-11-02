#ifndef __169_MAJORITY_ELEMENT_HPP__
#define __169_MAJORITY_ELEMENT_HPP__

#include <unordered_map>
#include <vector>
using namespace std;

namespace __169 {

class Solution {
 public:
 int majorityElement(vector<int>& nums) {
    int majority_element = nums[0];
    int count = 1;
    for(int i = 1; i < nums.size(); i++) {
      if(majority_element == nums[i]) {
        ++count;
      } else {
        if(count == 0) {
          majority_element = nums[i];
          ++count;
        } else {
          --count;
        }
      }
    }
    return majority_element;
  }
  int majorityElement_beginner(vector<int>& nums) {
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
