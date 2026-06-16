// https://leetcode.com/problems/process-string-with-special-operations-i/description/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string processStr(string s) {
        string ans = "";
        for (char c : s){
            if(c >= 'a' && c <= 'z'){
                ans.push_back(c);
            }
            else if(c == '*'){
                if(!ans.empty()) ans.pop_back();
            }
            else if(c == '#'){
                ans += ans;
            }
            else if(c == '%'){
                reverse(ans.begin(),ans.end());
            }
        }
        return ans;
    }
};

int main(){
    
    return 0;
}