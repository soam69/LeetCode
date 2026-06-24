// https://leetcode.com/problems/sum-of-compatible-numbers-in-range-i/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int sum = 0;
        for(int i = n-k; i <= n+k; i++){
            if(!(n & i) and i > 0){
                sum += i;
            }
        }
        return sum;
    }
};

int main(){
    
    return 0;
}