#include <iostream>
#include <vector>
#include <set>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    set<int> s;
    for(int i = 0; i < nums.size(); i++){
        s.insert(nums.at(i));
    }
    return s.size() == nums.size();
}