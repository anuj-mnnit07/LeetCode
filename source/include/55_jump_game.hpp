#ifndef __55_JUMP_GAME_HPP__
#define __55_JUMP_GAME_HPP__

#include <vector>

using namespace std;

class Solution {
 public:
  bool canJump(vector<int>& nums) {
    int i = 0;
    int reachable = 0;
    while (i < nums.size()) {
      if (reachable < i)
        return false;
      reachable = max(reachable, i + nums[i]);
      ++i;
    }
    return true;
  }
};

#endif
