// https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int k = 0;
            int placer = 0;
            int checker = 0;
            int len = nums.size();
    
            while(checker!=len){
                int key = nums[checker];
                while(checker < len and nums[checker] == key){
                    checker++;
                }
                nums[placer] = key;
                placer++;
                k++;
            }
    
            return k;
        }
};


int main(){
    
    return 0;
}