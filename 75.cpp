// https://leetcode.com/problems/sort-colors/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        int i = 0;
        while(i <= right){
            if(nums[i] == 0){
                swap(nums[left],nums[i]);
                left++;
                i++;
            }
            else if(nums[i] == 2){
                swap(nums[right],nums[i]);
                right--;
            }
            else i++;
        }
    }
};

int main(){
    
    return 0;
}