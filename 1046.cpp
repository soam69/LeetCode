// https://leetcode.com/problems/last-stone-weight/description/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int size = stones.size();
        int i = 0;
        while (i < size-1){
            sort(stones.begin() + i,stones.end(),greater<int>());
            stones[i+1] = stones[i] - stones[i+1];
            i++;
        }
        return stones[i];   
    }
};

int main(){
    
    return 0;
}