// https://leetcode.com/problems/contains-duplicate/description/

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> hash;
        for (int i : nums){
            if (hash.find(i) == hash.end()){
                hash.insert(i);
            }
            else return true;
        }
        return false;
    }
};

int main(){
    
    return 0;
}