// https://leetcode.com/problems/arranging-coins/description/

#include <iostream>
using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {
        int low = 0;
        int high = n;
        while(low<=high){
            long long mid = low + (high-low)/2;
            long long sum = (mid*(mid+1))/2;
            if(sum == n) return mid;
            if(sum > n){
                high = mid-1;
            }
            else if (sum < n){
                low = mid+1;
            }
        }
        return high;
    }
};

int main(){
    
    return 0;
}