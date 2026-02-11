// https://leetcode.com/problems/find-pivot-index/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for(int i : nums) sum+= i;
        int tsum = 0;
        for(int i = 0; i < nums.size(); i++){
            if(tsum == sum-nums[i]) return i;
            tsum += nums[i];
            sum -= nums[i];
        }
        return -1;
    }
};

int main(){
    
    return 0;
}