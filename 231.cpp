// https://leetcode.com/problems/power-of-two/

#include <iostream>
using namespace std;

class Solution {
    public:
        bool isPowerOfTwo(int n) {
            if (n == 1){
                return true;
            }
            if (n == 0){
                return false;
            }
            while (n != 0){
                if ( n%2 != 0 ){
                    return false;
                }
                else {
                    n /= 2;
                }
            }
            return true;
            
        }
    };

int main(){
    
    return 0;
}