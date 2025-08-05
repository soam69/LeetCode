// https://leetcode.com/problems/palindrome-number/description/

#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int check = x;
        int ans = 0;
        while (x != 0) {
            int digit = x % 10;
            x /= 10;

            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && digit > 7)) return false;
            if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && digit < -8)) return false;

            ans = ans * 10 + digit;
        }
        return (ans == check);
    }
};

int main(){
    
    return 0;
}