#ifndef __380_INSERT_DELETE_GETRANDOM_O1_HPP__
#define __380_INSERT_DELETE_GETRANDOM_O1_HPP__

#include <random>
#include <unordered_map>
#include <vector>

using namespace std;
namespace __380 {

class RandomizedSet {
  unordered_map<int, int> tmap;
  vector<int> tvec;

 public:
  RandomizedSet() {}

  bool insert(int val) {
    if (tmap.find(val) != tmap.end()) {
      return false;
    }
    tmap[val] = tvec.size();
    tvec.push_back(val);
  }

  bool remove(int val) {
    auto iter = tmap.find(val);
    if (iter == tmap.end()) {
      return false;
    }
    int vec_index = iter->second;
    tmap[tvec.back()] = vec_index;
    tmap.erase(iter);
    tvec[vec_index] = tvec.back();
    tvec.pop_back();
    return true;
  }

  int getRandom() {
    int index = rand() % tvec.size();
    return tvec[index];
  }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */

}  // namespace __380
#endif
