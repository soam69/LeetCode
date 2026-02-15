// https://leetcode.com/problems/game-of-life/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int liveCells(vector<vector<int>>& board, int m, int n, int x, int y){
        int ans = 0;
        for(int i = x-1; i <= x+1; i++){
            for(int j = y-1; j <= y+1; j++){
                if(i >= 0 and j >= 0 and i < m and j < n) ans += board[i][j];
            }
        }
        return ans - board[x][y];
    }
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<int>> change (m,vector<int>(n,-1));
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                int live = liveCells(board,m,n,i,j);
                if(live < 2) change[i][j] = 0;
                else if(live > 3) change[i][j] = 0;
                else if(live == 3) change[i][j] = 1;
            }
        }
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(change[i][j] >= 0) board[i][j] = change[i][j];
            }
        }
    }
};

int main(){
    
    return 0;
}