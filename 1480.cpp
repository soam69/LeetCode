// https://leetcode.com/problems/running-sum-of-1d-array/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int size = nums.size();
        for(int i = 1; i < size; i++){
            nums[i] += nums[i-1];
        }
        return nums;
    }
};

int main(){
    
    return 0;
}