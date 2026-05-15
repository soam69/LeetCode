// https://leetcode.com/problems/longest-continuous-increasing-subsequence/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int count = 0;
        int curr = 0;
        int maxi = 0;
        for(int i : nums){
            if(i > curr){
                count++;
            }
            else{
                maxi = max(maxi, count);
                count = 1;
            }
            curr = i;
        }
        return max(maxi, count);
    }
};

int main(){
    
    return 0;
}