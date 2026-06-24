// https://leetcode.com/problems/create-grid-with-exactly-one-path/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> createGrid(int m, int n) {
        if(n == 1) return vector<string>(m,string(n,'.'));
        vector<string> ans(m,string(n,'#'));
        ans[0][0] = '.';
        for(int i = 0; i < m-1; i++){
            ans[i][1] = '.';
        }
        for(int i = 1; i < n; i++){
            ans[m-1][i] = '.';
        }
        return ans;
    }
};

int main(){
    
    return 0;
}