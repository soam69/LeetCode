// https://leetcode.com/problems/rabbits-in-forest/description/

#include <iostream>
#include <vector>
#include<cmath>
using namespace std;

class Solution {
    public:
        int numRabbits(vector<int>& answers) {
            int ans = 0;
            int n = answers.size();
            int hashtable[1000] = {0};
            for (int i = 0; i < n; i++){
                hashtable[answers[i]]++;
            }
            for (int i = 0; i < 1000; i++){
                if (hashtable[i] == 0){
                    continue;
                }
                int size = i+1;
                int grps = ceil((double)hashtable[i]/size);
                ans = ans + grps*size;
            }
            return ans;
    
        }
};

int main(){
    
    return 0;
}