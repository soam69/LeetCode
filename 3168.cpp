// https://leetcode.com/problems/minimum-number-of-chairs-in-a-waiting-room/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minimumChairs(string s) {
        int count = 0;
        int maxi = 0;
        for(char c : s){
            if (c == 'E'){
                count++;
                maxi = max(maxi,count);
            }
            else count--;
        }
        return maxi;
    }
};

int main(){
    
    return 0;
}