// https://leetcode.com/problems/valid-perfect-square/description/

#include <iostream>
using namespace std;

class Solution {
    public:
        bool isPerfectSquare(int num) {
            int low = 0;
            int high = num/2;
            long long mid;
            if ( num==1 || num==0 ){
                return true;
            }
            while (low<=high){
                mid = low + (high-low)/2;
                if ( mid*mid == num){
                    return true;
                }
                else if ( mid*mid > num){
                    high = mid - 1;
                }
                else {
                    low = mid+1;
                }
            }
            return false;
        }
    };

int main(){
    
    return 0;
}