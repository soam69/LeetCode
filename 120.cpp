// https://leetcode.com/problems/triangle/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int size = triangle.size();
        int ans = triangle[0][0];
        for(int i = 1; i < size; i++){
            triangle[i][0] += triangle[i-1][0];
            triangle[i][i] += triangle[i-1][i-1];
            ans = triangle[i][0];
            int len = triangle[i].size();
            for (int j = 1; j < len-1; j++){
                triangle[i][j] += min(triangle[i-1][j],triangle[i-1][j-1]);
                ans = min(ans, triangle[i][j]);
            }
            ans = min(ans,triangle[i][i]);
        }
        return ans;
    }
};

int main(){
    
    return 0;
}