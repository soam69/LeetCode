// https://leetcode.com/problems/find-the-duplicate-number/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int size = nums.size();
        vector<int> count (size, 0);

        for (int i : nums){
            count[i]++;
        }
        for (int i = 1; i < size; i++){
            if(count[i] >= 2) return i; 
        }
        return -1;
    }
};

int main(){
    
    return 0;
}