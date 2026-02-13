// https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if (nums[mid] < 0) low = mid+1;
            else high = mid-1;
        }
        int neg = high+1;
        low = 0;
        high = nums.size()-1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if (nums[mid] > 0) high = mid-1;
            else low = mid+1;
        }
        int pos = nums.size()-low;
        return max(neg,pos);
    }
};

int main(){
    
    return 0;
}