// https://leetcode.com/problems/valid-palindrome/description/

#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string check = "";
        for (char ch : s){
            if((ch >= 65 and ch <=90) or (ch >= 97 and ch <=122) or (ch >= 48 and ch <=57) ){
                check.push_back((char)tolower(ch));
            }
        }
        string rev = check;
        reverse(rev.begin(),rev.end());
        return (rev==check);
    }
};

int main(){
    
    return 0;
}