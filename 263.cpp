// https://leetcode.com/problems/ugly-number/

#include <iostream>
using namespace std;

class Solution {
    public:
        bool isUgly(int n) {
            if (n == 0){
                return false;
            }
            if (n == 1){
                return true;
            }
            if (n%2 == 0){
                return isUgly(n/2);
            }
            if (n%3 == 0){
                return isUgly(n/3);
            }
            if (n%5 == 0){
                return isUgly(n/5);
            }
            return false;
            
        }
};
int main(){
    
    return 0;
}