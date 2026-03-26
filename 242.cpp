// https://leetcode.com/problems/valid-anagram/description/

#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp;
        for (char c : s){
            mp[c]++;
        }
        for (char c : t){
            mp[c]--;
        }
        for (auto& it : mp){
            if (it.second != 0) return false;
        }
        return true;
    }
};

int main(){
    
    return 0;
}