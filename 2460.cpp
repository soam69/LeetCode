// https://leetcode.com/problems/apply-operations-to-an-array/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        vector<int> applyOperations(vector<int>& nums) {
            int size = nums.size();
            vector<int> ans(size, 0);
            int k = 0;
            for (int i = 0; i < size; i++){
                if (i == size-1){
                    ans[k++] = nums[i];
                }
                else if (nums[i] != nums[i+1] and nums[i] != 0){
                    ans[k++] = nums[i];
                }
                else if (nums[i] == nums[i+1] and nums[i] != 0){
                    ans[k++] = nums[i++]*2;
                }
            }
    
            return ans;
            
        }
    };

int main(){
    
    return 0;
}