// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        vector<int> ans(2,-1);
        while(low <= high){
            int mid = low + (high-low)/2;
            if (nums[mid] < target){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        if (low < nums.size() and nums[low] == target) ans[0] = low;
        high = nums.size()-1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if (nums[mid] > target){
                high = mid-1;
            }
            else{
                low = mid + 1;
            }
        }
        if (high >= 0 and nums[high] == target) ans[1] = high;
        return ans;
    }
};

int main(){
    
    return 0;
}