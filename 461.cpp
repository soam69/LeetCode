// https://leetcode.com/problems/hamming-distance/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
        int n = x ^ y;
        int count;
        while (n > 0){
            if (n & 1) count++;
            n >>= 1;
        }
        return count;
    }
};

int main(){
    
    return 0;
}