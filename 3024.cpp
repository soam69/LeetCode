// https://leetcode.com/problems/type-of-triangle/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string triangleType(vector<int>& nums) {
        int a = nums[0];
        int b = nums[1];
        int c = nums[2];

        if (a+b <= c || a+c <= b || b+c <= a){
            return "none";
        }

        if (a == b and b == c){
            return "equilateral";
        }
        
        if (a == b or b == c or a == c){
            return "isosceles";
        }
        else return "scalene";
    }
};

int main(){
    
    return 0;
}