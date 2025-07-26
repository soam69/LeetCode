// https://leetcode.com/problems/search-in-rotated-sorted-array-ii/description/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int size = nums.size();
        int high = size - 1;
        int low = 0;
        sort(nums.begin(),nums.end());
        while (low <= high){
            int mid = low + (high-low)/2;
            if (nums[mid] == target) return true;
            if (nums[mid] > target) high = mid - 1;
            else low = mid + 1;
        }
        return false;
        
    }
};

int main(){
    
    return 0;
}