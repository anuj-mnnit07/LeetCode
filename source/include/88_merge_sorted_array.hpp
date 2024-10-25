#ifndef __88_MERGE_SORTED_ARRAY_HPP__
#define __88_MERGE_SORTED_ARRAY_HPP__

#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int end1 = m - 1, end2 = n - 1, end = m + n - 1;
        while(end1 >= 0 && end2 >= 0) {
            if(nums1[end1] >= nums2[end2]) {
                nums1[end] = nums1[end1--];
            } else {
                nums1[end] = nums2[end2--];
            }
            --end;
        }
        while(end2 >= 0) {
            nums1[end--] = nums2[end2--];
        }
    }
};

#endif
