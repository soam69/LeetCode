// https://leetcode.com/problems/find-players-with-zero-or-one-losses/description/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, int> mp;
        int size = matches.size();
        for (int i = 0; i < size; i++){
            mp[matches[i][0]];
            mp[matches[i][1]]++;
        }
        vector<vector<int>> ans(2);
        for (auto& it : mp){
            if (it.second == 0) ans[0].push_back(it.first);
            else if (it.second == 1) ans[1].push_back(it.first);
        }
        sort(ans[0].begin(),ans[0].end());
        sort(ans[1].begin(),ans[1].end());
        return ans;
    }
};

int main(){
    
    return 0;
}