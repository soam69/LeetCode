// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int size = nums.size();
        int pivot = 0;
        for (int i = 0; i < size - 1; i++){
            if (nums[i+1] < nums[i]){
                pivot = (i+1)%size;
                break;
            }
        }
        if (pivot == 0) return true;
        for (int i = pivot; i < size - 1; i++){
            if (nums[i+1] < nums[i]) return false;
        }
        if (nums[size-1] > nums[0]) return false;
        return true;
    }
};

int main(){
    
    return 0;
}