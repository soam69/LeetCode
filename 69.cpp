// https://leetcode.com/problems/sqrtx/description/

#include <iostream>
using namespace std;

class Solution {
    public:
        int mySqrt(int x) {
            int low = 0;
            int high = x/2;
            long long mid;
            int final;
            if (x == 0 || x == 1){
                return x;
            }
            while (low<=high){
                mid = low + (high-low)/2;
                if (mid*mid == x){
                    return mid;
                }
                else if (mid*mid > x){
                    high = mid-1;
                }
                else {
                    final = mid;
                    low = mid+1;
                }
            }
            return final;
    }
    };

int main(){
    
    return 0;
}