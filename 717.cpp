// https://leetcode.com/problems/1-bit-and-2-bit-characters/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int size = bits.size();
        int i = 0;
        while (i < size){
            if (i == size-1) return true;
            if(bits[i] == 1){
                i++;
            }
            i++;
        }
        return false;
    }
};

int main(){
    
    return 0;
}