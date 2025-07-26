// https://leetcode.com/problems/search-in-rotated-sorted-array/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int size = nums.size();
        int high = size - 1;
        int low = 0;
        int pivot;
        while (low != high){
            int mid = low + (high-low)/2;
            if (nums[mid] < nums[high]){
                high = mid;
            }
            else low = mid + 1;
        }
        pivot = low;
        cout << "Pivot is at : " << pivot;
        low = 0;
        high = size - 1;
        if (target == nums[pivot]) return pivot;
        if (target > nums[high]) high = pivot - 1;
        else low = pivot;
        while (low <= high){
            int mid = low + (high-low)/2;
            if (nums[mid] == target) return mid;
            if (nums[mid] > target) high = mid - 1;
            else low = mid + 1;
        }
        return -1;
        
    }
};

int main(){
    
    return 0;
}