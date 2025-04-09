// https://leetcode.com/problems/first-bad-version/description/

#include <iostream>
using namespace std;

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
    public:
        int firstBadVersion(int n) {
            int low = 1;
            int high = n;
            int mid;
    
            while (low<=high){
                mid = low + (high - low)/2;
                if (isBadVersion(mid) and !isBadVersion(mid-1)){
                    return mid;
                }
                else if (isBadVersion(mid)){
                    high = mid;
                }
                else{
                    low = mid + 1;
                }
            }
            return -1;
        }
    };

int main(){
    
    return 0;
}