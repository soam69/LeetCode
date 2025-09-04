// https://leetcode.com/problems/find-closest-person/description/

#include <iostream>
using namespace std;

class Solution {
public:
    int findClosest(int x, int y, int z) {
        if (abs(x-z) == abs(y-z)) return 0;
        if (abs(x-z) < abs(y-z)) return 1;
        else return 2;
    }
};

int main(){
    
    return 0;
}