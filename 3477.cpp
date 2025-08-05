// https://leetcode.com/problems/fruits-into-baskets-ii/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int size = fruits.size();
        vector<bool> full(size);
        int count = size;
        for (int i = 0; i < size; i++){
            for (int j = 0; j < size; j++){
                if(baskets[j] >= fruits[i] and !full[j]){
                    count--;
                    full[j] = true;
                    break;
                }
            }
        }
        return count;
    }
};

int main(){
    
    return 0;
}