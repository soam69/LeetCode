// https://leetcode.com/problems/subarray-product-less-than-k/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int size = nums.size();
        int low = 0;
        int high = 0;
        int prod = 1;
        int ans = 0;
        while (high < size){
            prod *= nums[high];
            while (low <= high and prod >= k){
                prod /= nums[low];
                low++;
            }
            ans += high - low + 1;
            high++; 
        }
        return ans;
    }
};

int main(){
    
    return 0;
}