// https://leetcode.com/problems/number-of-laser-beams-in-a-bank/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0;
        int mult = 0;
        for (const string& str : bank){
            int sum = 0;
            for(char c : str){
                if(c == '1') sum++;
            }
            if(sum){
                ans += sum*mult;
                mult = sum;
            }
        }
        return ans;
    }
};

int main(){
    
    return 0;
}