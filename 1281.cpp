// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/description/

#include <iostream>
using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod = 1;
        int sum = 0;
        while (n>0){
            int i = n%10;
            prod = prod * i;
            sum = sum + i;
            n = n/10;
        }
        return prod - sum;
    }
};

int main(){
    
    return 0;
}