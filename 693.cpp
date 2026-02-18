// https://leetcode.com/problems/binary-number-with-alternating-bits/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool hasAlternatingBits(int n) {
        if ((n & 3) == 1){
            while(n != 0 and n != 1){
                if((n&3) != 1) return false;
                n >>= 2;
            }
            return true;
        }
        else if ((n & 3) == 2){
            while(n != 0 and n != 2){
                if((n&3) != 2) return false;
                n >>= 2;
            }
            return true;
        }
        else return false;
    }
};

int main(){
    
    return 0;
}