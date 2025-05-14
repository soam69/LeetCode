// https://leetcode.com/problems/distribute-candies/description/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int size = candyType.size();
        int k = 0;
        int currType = -69;
        sort (candyType.begin(), candyType.end());
        for ( int i = 0; i < size; i++ ){
            if (candyType[i] != currType){
                currType = candyType[i];
                k++;
            }
        }
        if (k < size/2) return k;
        else return size/2;
        
    }
};

int main(){
    
    return 0;
}