// https://leetcode.com/problems/missing-number/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        int ans = (size*(size+1))/2;
        for (int i : nums){
            ans -= i;
        }
        return ans;
    }
};

int main(){
    
    return 0;
}