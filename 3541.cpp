// https://leetcode.com/problems/find-most-frequent-vowel-and-consonant/description/

#include <iostream>
#include <map>
using namespace std;

class Solution {
public:
    int maxFreqSum(string s) {
        map<char, int> vowel;
        map<char, int> consonant;

        for (char c : s){
            if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u'){
                vowel[c]++;
            }
            else consonant[c]++;
        }
        int maxvow = 0;
        int maxcon = 0;
        for (auto &key : vowel){
            if (key.second > maxvow){
                maxvow = key.second;
            }
        }
        for (auto &key : consonant){
            if (key.second > maxcon){
                maxcon = key.second;
            }
        }
        return maxcon + maxvow;
    }
};

int main(){
    
    return 0;
}