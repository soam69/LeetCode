// https://leetcode.com/problems/robot-return-to-origin/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool judgeCircle(string moves) {
        int sum1 = 0, sum2 = 0;
        for (char c : moves){
            if (c == 'U') sum1++;
            else if (c == 'D') sum1--;
            else if (c == 'R') sum2++;
            else sum2--;
        }
        return (!sum1 and !sum2);
    }
};

int main(){
    
    return 0;
}