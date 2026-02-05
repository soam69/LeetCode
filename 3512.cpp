// https://leetcode.com/problems/minimum-operations-to-make-array-sum-divisible-by-k/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int size = nums.size();
        int sum = 0;
        for (int i = 0; i < size; i++ ){
            sum += nums[i];
        }
        return sum%k;
    }
};

int main(){
    
    return 0;
}