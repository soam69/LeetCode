// https://leetcode.com/problems/find-target-indices-after-sorting-array/description/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int i = 0;
        for (int num : nums){
            if (num == target){
                ans.push_back(i);
            }
            i++;
        }
        return ans;
    }
};

int main(){
    
    return 0;
}