// https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters/description/

#include <iostream>
using namespace std;

class Solution {
public:
    int countGoodSubstrings(string s) {
        int size = s.length();
        int count = 0;
        if (size < 3) return 0;
        for (int i = 0; i < size - 2; i ++){
            if (s[i] != s[i+1] and s[i] != s[i+2] and s[i+1] != s[i+2]) count++;
        }
        return count;
    }
};

int main(){
    
    return 0;
}