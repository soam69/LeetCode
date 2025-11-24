// https://leetcode.com/problems/pascals-triangle-ii/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans(rowIndex + 1, 1);
        for (int i = 2; i <= rowIndex; i++){
            vector<int> curr = ans;
            for(int j = 1; j < i; j++){
                ans[j] = curr[j-1] + curr[j];
            }
        }
        return ans;
    }
};

int main(){
    
    return 0;
}