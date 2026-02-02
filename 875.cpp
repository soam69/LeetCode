// https://leetcode.com/problems/koko-eating-bananas/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = 0;
        for (int p : piles){
            if (p > high) high = p;
        }
        while (low < high){
            int mid = low + (high-low)/2;  
            long long hrs = 0;
            for (int p : piles){
                hrs += (p + mid -1)/mid;
            }
            if (hrs <= h){
                high = mid;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};

int main(){
    
    return 0;
}