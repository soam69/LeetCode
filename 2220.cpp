// https://leetcode.com/problems/minimum-bit-flips-to-convert-number/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minBitFlips(int start, int goal) {
        int n = start ^ goal;
        int count = 0;
        while(n > 0){
            if(n & 1) count++;
            n >>= 1;
        }
        return count;
    }
};

int main(){
    
    return 0;
}