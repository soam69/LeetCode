// https://leetcode.com/problems/group-anagrams/description/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for(string str : strs){
            string s = str;
            sort(s.begin(),s.end());
            mp[s].push_back(str);
        }
        vector<vector<string>> ans;
        for(auto& it : mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};

int main(){
    
    return 0;
}