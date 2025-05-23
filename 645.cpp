// https://leetcode.com/problems/set-mismatch/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int size = nums.size();
        vector<int> count (size+1, 0);
        vector<int> ans (2,0);
        int ActualSum = (size*(size+1))/2;

        for (int i : nums){
            ActualSum -= i;
            count[i]++;
        }

        for (int i = 0; i <= size; i++){
            if (count[i] == 2){
                ans[0] = i;
                ans[1] = ActualSum + i;
            }
        }
        return ans;
    }
};

int main(){
    
    return 0;
}