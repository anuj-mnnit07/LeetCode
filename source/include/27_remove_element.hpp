#ifndef __27_REMOVE_ELEMENT_HPP__
#define __27_REMOVE_ELEMENT_HPP__

#include <vector>
using namespace std;

class Solution {
  void swap(vector<int>& nums, int pos1, int pos2) {
    nums[pos1] = nums[pos1] ^ nums[pos2];
    nums[pos2] = nums[pos1] ^ nums[pos2];
    nums[pos1] = nums[pos1] ^ nums[pos2];
  }

 public:
  int removeElement(vector<int>& nums, int val) {
    int start = 0, end = nums.size() - 1;
    int count = nums.size();
    auto shift = [&](int& count, int& end) {
      while (end >= 0) {
        if (nums[end] == val) {
          --end;
          --count;
        } else
          break;
      }
    };

    while (start <= end) {
      if (nums[start] == val) {
        shift(count, end);
        if (end < start)
          break;
        swap(nums, start, end);
        --end;
        --count;
      }
      ++start;
    }
    return count;
  }
};
#endif
