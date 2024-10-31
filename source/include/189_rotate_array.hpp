#ifndef __189_ROTATE_ARRAY_HPP__
#define __189_ROTATE_ARRAY_HPP__

#include <vector>

namespace __189 {

using namespace std;
class Solution {
  void reverse(vector<int>& nums, int start, int end) {
    while (start < end) {
      nums[start] ^= nums[end];
      nums[end] ^= nums[start];
      nums[start] ^= nums[end];
      ++start;
      --end;
    }
  }

 public:
  void rotate(vector<int>& nums, int k) {
    k = k % nums.size();
    reverse(nums, nums.size() - k, nums.size() - 1);
    reverse(nums, 0, nums.size() - k - 1);
    reverse(nums, 0, nums.size() - 1);
  }
};

}
#endif
