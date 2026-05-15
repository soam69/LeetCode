// https://leetcode.com/problems/consecutive-characters/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxPower(string s) {
        int count = 0;
        char curr = s[0];
        int maxi = 1;
        for(char c : s){
            if(c == curr){
                count ++;
            }
            else{
                curr = c;
                maxi = max(maxi, count);
                count = 1;
            }
        }
        return max(maxi,count);
    }
};

int main(){
    
    return 0;
}