// https://leetcode.com/problems/trim-trailing-vowels/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string trimTrailingVowels(string s) {
        int size = s.size();
        int ans = size;
        for(int i = size-1; i >= 0; i--){
            if (s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u'){
                ans--;
            }
            else break;
        }
        string fin = s.substr(0,ans);
        return fin;
    }
};

int main(){
    
    return 0;
}