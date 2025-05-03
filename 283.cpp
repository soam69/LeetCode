// https://leetcode.com/problems/move-zeroes/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            int size = nums.size();
            int k = 0;
            for (int i = 0; i < size; i++){
                if (nums[i] != 0){
                    swap(nums[i],nums[k++]);                
                }
            }
        }
};


int main(){
    
    return 0;
}