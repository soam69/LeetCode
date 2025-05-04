// https://leetcode.com/problems/number-of-equivalent-domino-pairs/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        int numEquivDominoPairs(vector<vector<int>>& dominoes) {
            int ht[10][10] = {0};
            int a,b;
            int count = 0;
            for (auto i : dominoes){
                a = min (i[0],i[1]);
                b = max (i[0],i[1]);
    
                count += ht[a][b]++;    
            }
            return count;
        }
};


int main(){
    
    return 0;
}