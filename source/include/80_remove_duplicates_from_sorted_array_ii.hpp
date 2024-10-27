
#include <vector>
using namespace std;

class Solution {
 public:
  int removeDuplicates1(vector<int>& nums) {
    if (nums.size() <= 2) {
      return nums.size();
    }
    int k = 2;
    for (int i = 2; i < nums.size(); i++) {
      if (nums[i] > nums[k - 2])
        nums[k++] = nums[i];
    }
    return k;
  }
};
