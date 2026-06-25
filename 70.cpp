// https://leetcode.com/problems/climbing-stairs/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if(n == 1) return n;
        int l = 1;
        int r = 1;
        int ans;
        while(--n){
            ans = l+r;
            l = r;
            r = ans;
        }
        return ans;
    }
};

int main(){
    
    return 0;
}