// https://leetcode.com/problems/count-residue-prefixes/description/

#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    int residuePrefixes(string s) {
        int len = s.size();
        set<char> dist;
        int ans = 0;
        for(int i = 0; i < len; i++){
                dist.insert(s[i]);
                if(dist.size() == (i+1)%3) ans++;
        }
        return ans;
    }
};

int main(){
    
    return 0;
}