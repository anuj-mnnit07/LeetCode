#ifndef __45_JUMP_GAME_II_HPP__
#define __45_JUMP_GAME_II_HPP__

#include <vector>

using namespace std;
namespace __45 {

class Solution {
 public:
  int jump(vector<int>& nums) {
    if (nums.size() < 2)
      return 0;
    int total_jumps = 0;
    int coverage = 0, last_index = 0;
    for (int i = 0; i < nums.size(); i++) {
      coverage = max(nums[i] + i, coverage);

      if (i == last_index) {
        last_index = coverage;
        ++total_jumps;

        if (coverage >= nums.size() - 1)
          return total_jumps;
      }
    }
    return total_jumps;
  }

  int jump_beginner(vector<int>& nums) {
    int* total_jumps = new int[nums.size()];
    for (int i = 0; i < nums.size(); i++) {
      total_jumps[i] = nums.size();
    }
    int last_index = 0;
    int end = 0;
    total_jumps[0] = 0;
    for (int i = 0; i < nums.size(); i++) {
      for (int j = i + 1; j <= i + nums[i]; j++) {
        if (j < nums.size())
          total_jumps[j] = min(total_jumps[i] + 1, total_jumps[j]);
      }
    }
    if (total_jumps[nums.size() - 1] < nums.size()) {
      return total_jumps[nums.size() - 1];
    }
    return 0;
  }
};

}  // namespace __45
#endif
