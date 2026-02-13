// https://leetcode.com/problems/construct-the-minimum-bitwise-array-i/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans(size,-1);
        for(int i = 0; i < size; i++){
            int start = nums[i]/2;
            while(start != nums[i]){
                if((start | start+1) == nums[i]){
                    ans[i] = start;
                    break;
                }
                start++;
            }
        }
        return ans;
    }
};

int main(){
    
    return 0;
}