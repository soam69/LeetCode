// https://leetcode.com/problems/largest-3-same-digit-number-in-string/description/

#include <iostream>
using namespace std;

class Solution {
public:
    string largestGoodInteger(string num) {
        int len = num.size();
        string ans = "";
        for(int i = 0; i < len-2; i++){
            string s = num.substr(i,3);
            if(s[0]==s[1] and s[0]==s[2] and s[2]==s[1]){
                if (s > ans){
                ans = s;
            }
            }
        }
        return ans;
    }
};

int main(){
    
    return 0;
}