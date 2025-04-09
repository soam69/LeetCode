// https://leetcode.com/problems/can-place-flowers/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        bool canPlaceFlowers(vector<int>& flowerbed, int n) {
            flowerbed.insert(flowerbed.begin(),0);
            flowerbed.push_back(0);
            int nn = flowerbed.size();
            
            for (int i = 1; i < nn-1;i++){
                if (flowerbed[i-1] == 0 && flowerbed[i+1] == 0 && flowerbed[i] == 0){
                    flowerbed[i] = 1;
                    n--;
                }
            }
            
            
            if (n <= 0){
                return true;
            }
            else return false;
        }
    };

int main(){
    
    return 0;
}