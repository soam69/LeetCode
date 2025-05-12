// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int size = nums.size();
        vector<bool> isPresent(size+1, false);
        vector<int> ans;

        for (int i = 0; i < size; i++){
            isPresent[nums[i]] = true;
        }

        for (int i = 1; i < size+1; i++){
            if (!isPresent[i]){
                ans.push_back(i);
            }
        }
        return ans;
    }
};

int main(){
    
    return 0;
}