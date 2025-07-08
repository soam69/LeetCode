// https://leetcode.com/problems/length-of-last-word/

#include <iostream>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.length();
        int count = 0;
        for (int i = len - 1; i >= 0; i--){
            if(s[i] == ' '){
                len--;
            }
            else break;
        }
        for (int i = len - 1; i >= 0; i--){
            if (s[i] != ' ') count++;
            else return count;
        }
        return count;
    }
};

int main(){
    
    return 0;
}