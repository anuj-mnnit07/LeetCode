#ifndef __26_REMOVE_DUPLICATE_FROM_SORTED_ARRAY_HPP__
#define __26_REMOVE_DUPLICATE_FROM_SORTED_ARRAY_HPP__

#include <vector>
using namespace std;

namespace __26 {

class Solution {
 public:
  int removeDuplicates(vector<int>& nums) {
    if (nums.size() < 2) {
      return nums.size();
    }
    int k = 1;
    for (int n = 1; n < nums.size(); n++) {
      int temp = n;
      while (temp < nums.size() && nums[k - 1] == nums[temp]) {
        temp++;
      }
      if (temp < nums.size()) {
        nums[k++] = nums[temp];
      }
      n = temp;
    }
    return k;
  }
};

}
#endif
