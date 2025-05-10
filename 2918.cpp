// https://leetcode.com/problems/minimum-equal-sum-of-two-arrays-after-replacing-zeros/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long v1 = 0;
        long long v2 = 0;
        long long sum1 = 0;
        long long sum2 = 0;
        
        for (auto i : nums1){
            if (i == 0){
                v1++;
                sum1 += 1;
            }
            else{
                sum1 += i;
            }
        }
        for (auto i : nums2){
            if (i == 0){
                v2++;
                sum2 += 1;
            }
            else{
                sum2 += i;
            }
        }
        
        if (sum1 == sum2){
            return sum1;
        }
        if (sum1 > sum2){
            if (v2 <= 0){
                return -1;
            }
            return max(sum1,sum2);
        }
        else{
            if (v1 <= 0){
                return -1;
            }
            return max(sum1,sum2);
        }
          
    }
};

int main(){
    
    return 0;
}