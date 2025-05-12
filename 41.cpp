// https://leetcode.com/problems/first-missing-positive/description/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int k = 1;
        nums.insert(nums.begin(), -1);
        int size = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 1; i < size; i++){
            if( nums[i] > 0 and nums[i] != nums[i-1]){
                if (nums[i] != k) return k;
                k++;
            }
        }
        return k;
    }
};

int main(){
    
    return 0;
}