// https://leetcode.com/problems/ransom-note/description/

#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> src;
        for (int i = 0; i < magazine.size(); i++){
            src[magazine[i]]++;
        }
        for (int i = 0; i < ransomNote.size(); i++){
            src[ransomNote[i]]--;
            if(src[ransomNote[i]] < 0) return false;
        }
        return true;
    }
};

int main(){
    
    return 0;
}