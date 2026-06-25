// https://leetcode.com/problems/check-good-integer/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool checkGoodInteger(int n) {
        int digitSum = 0;
        int squareSum = 0;
        while(n){
            int temp = n%10;
            digitSum += temp;
            squareSum += temp*temp;
            n /= 10;
        }
        return (squareSum - digitSum >= 50);
    }
};

int main(){
    
    return 0;
}