// https://leetcode.com/problems/maximum-average-subarray-i/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int size = nums.size();
        int sum = 0;
        for (int i = 0; i < k; i++){
            sum += nums[i];
        }
        int max = sum;
        for (int i = k; i < size; i++){
            sum = sum + nums[i] - nums[i-k];
            if (sum > max) max = sum;
        }
        cout << max;
        return double(max)/k;
    }
};

int main(){
    
    return 0;
}