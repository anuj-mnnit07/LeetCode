#ifndef __274_H_INDEX_HPP__
#define __274_H_INDEX_HPP__

#include <algorithm>
#include <vector>

using namespace std;
namespace __274 {

class Solution {
 public:
  int hIndex(vector<int>& citations) {
    sort(citations.begin(), citations.end());
    int n = citations.size();
    int low = 0, high = n - 1;
    while (low <= high) {
      int mid = low + ((high - low) >> 1);
      if (citations[mid] < n - mid) {
        low = mid + 1;
      } else {
        high = mid - 1;
      }
    }
    return n - low;
  }
};

}  // namespace __274
#endif
