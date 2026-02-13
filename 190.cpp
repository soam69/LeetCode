// https://leetcode.com/problems/reverse-bits/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int reverseBits(int n) {
        int t = 32;
        int ans = 0;
        int x;
        while(t--){
            ans <<= 1;
            x = n&1;
            ans += n&1;
            n >>= 1;
        }
        return ans;
    }
};

int main(){
    
    return 0;
}