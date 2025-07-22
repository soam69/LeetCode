// https://leetcode.com/problems/contains-duplicate-ii/description/

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int size = nums.size();
        unordered_set<int> hash;
        for (int i = 0; i < size; i++){
            if(hash.find(nums[i]) != hash.end()) return true;
            hash.insert(nums[i]);
            if(hash.size() > k) hash.erase(nums[i-k]);
        }
        
        return false;
    }
};

int main(){
    
    return 0;
}