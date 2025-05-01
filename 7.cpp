#include <iostream>
using namespace std;

int INT_MAX = 2147483647;
int INT_MIN = -2147483648;

class Solution {
    public:
        int reverse(int x) {
            int ans = 0;
            while (x != 0) {
                int digit = x % 10;
                x /= 10;
    
                if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && digit > 7)){
                    return 0;
                }
                if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && digit < -8)){
                    return 0;
                }
    
                ans = ans * 10 + digit;
            }
            return ans;
        }
};

    
int main(){
    
    return 0;
}