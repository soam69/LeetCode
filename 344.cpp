// https://leetcode.com/problems/reverse-string/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int size = s.size();
        int left = 0;
        int right = size-1;
        while(left < right){
            swap(s[left],s[right]);
            left++;
            right--;
        }
    }
};

int main(){
    
    return 0;
}