// https://leetcode.com/problems/two-sum/description/

#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for ( int i = 0; i < n; i++){
            int temp = target - nums[i];
            for (int j = i+1; j < n; j++){
                if (nums[j]==temp){
                    return {i,j};
                }
            }
        }
        return {}; 
    }
};

int main(){
    
    return 0;
}