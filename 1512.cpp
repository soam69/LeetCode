// https://leetcode.com/problems/number-of-good-pairs/description/

#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int size = nums.size();
        int count = 0;
        for (int i = 0; i < size-1; i++){
            for (int j = i+1; j < size; j++){
                if (nums[i] == nums[j]) count++;
            }
        }
        return count;
    }
};

int main(){
    
    return 0;
}