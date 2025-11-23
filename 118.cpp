// https://leetcode.com/problems/pascals-triangle/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        int count = 0;
        for (int i = 0; i < numRows; i++){
            vector<int> curr(i+1, 1);
            for(int j = 1; j < i; j++){
                curr[j] = ans[i-1][j-1] + ans[i-1][j];
            }
            ans.push_back(curr);
        }
        return ans;
    }
};

int main(){
    
    return 0;
}