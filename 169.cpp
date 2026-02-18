// https://leetcode.com/problems/majority-element/description/

#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size();
        map<int,int> hash;
        for(int i : nums){
            hash[i]++;
            if(hash[i] > size/2) return i;
        }
        return 0;
    }
};

int main(){
    
    return 0;
}