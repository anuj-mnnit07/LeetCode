#ifndef __238_PRODUCT_OF_ARRAY_EXCEPT_SELF_HPP__
#define __238_PRODUCT_OF_ARRAY_EXCEPT_SELF_HPP__

#include <vector>

using namespace std;
namespace __238 {

class Solution {
public:
  vector<int> productExceptSelf(vector<int>& nums) {
    int size = nums.size();

    // below array will be used for output also
    vector<int> right(size);
    right[size - 1] = 1;
    for (int i = size - 2; i >= 0; --i) {
      right[i] = right[i+1] * nums[i+1];
    }
    // create left product array into nums array
    int previous_element = nums[0];
    nums[0] = 1;
    for (int i = 1; i < size; ++i) {
      int temp = nums[i];
      nums[i] = nums[i - 1] * previous_element;
      previous_element = temp;
    }
    for (int i = 0; i < size; i++) {
      right[i] = right[i] * nums[i];
    }
    return right;
  }

    vector<int> productExceptSelf_beginner(vector<int>& nums) {
        int size = nums.size();

        //below array will be used for output also
        vector<int> right(size);
        int next_element = 1, right_product = 1;
        for(int i = size - 1; i >= 0; --i) {
            right[i] = right_product = right_product * next_element;
            next_element = nums[i];
        }
        //create left product array into nums array
        int left_product = 1;
        int previous_element = 1;
        for(int i = 0; i < size; ++i) {
            left_product = left_product * previous_element;
            previous_element = nums[i];
            nums[i] = left_product;
        }
        for(int i = 0; i < size; i++) {
            right[i] = right[i] * nums[i];
        }
        return right;
    }
};

}
#endif
