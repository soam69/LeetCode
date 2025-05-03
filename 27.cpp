// https://leetcode.com/problems/remove-element/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        int removeElement(vector<int>& nums, int val) {
            int size = nums.size();
            int k = 0;
            for (int i = 0; i < size; i++){
                if (nums[i] != val){
                    nums[k++] = nums[i];
                }
            }
            return k++;
        }
};
int main(){
    
    return 0;
}