// https://leetcode.com/problems/mirror-distance-of-an-integer/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int reverse(int n){
        int ans = 0;
        while(n){
            ans = ans*10 + n%10;
            n = n/10;
        }
        return ans;
    }
    int mirrorDistance(int n) {
        return abs(n - reverse(n));
    }
};

int main(){
    
    return 0;
}