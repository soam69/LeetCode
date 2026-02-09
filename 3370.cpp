// https://leetcode.com/problems/smallest-number-with-all-set-bits/description/

#include <iostream>
using namespace std;

class Solution {
public:
    int smallestNumber(int n) {
        int m = 1;
        while(m < n){
            m |= m << 1;
        }
        return m;
    }
};

int main(){
    
    return 0;
}