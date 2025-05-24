// https://leetcode.com/problems/find-words-containing-character/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int size = words.size();
        vector<int> ans;
        int m;
        for (int i = 0; i < size; i++){
            m = words[i].length();
            for (int j = 0; j < m; j++){
                if (words[i][j] == x){
                    ans.push_back(i);
                    break;
                }
                
            }
        }
        return ans;
    }
};
int main(){
    
    return 0;
}