// https://leetcode.com/problems/max-consecutive-ones/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxi = 0;
        for(int i : nums){
            if (i) count++;
            else {
                if (count > maxi) maxi = count;
                count = 0;
            }
        }
        return max(maxi,count);
    }
};

int main(){
    
    return 0;
}