// https://leetcode.com/problems/transformed-array/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int size = nums.size();
        vector<int> result(size);
        for(int i = 0; i < size; i++){
            int t = i;
            t = ((t+nums[i])%size + size)%size;
            result[i] = nums[t];
        }
        return result;
    }
};

int main(){
    
    return 0;
}