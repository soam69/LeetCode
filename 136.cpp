// https://leetcode.com/problems/single-number/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int size = nums.size();
        int ans = 0;
        for (int i : nums){
            ans = ans^i;
        }
        return ans;
    }
};

int main(){
    
    return 0;
}