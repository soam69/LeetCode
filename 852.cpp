// https://leetcode.com/problems/peak-index-in-a-mountain-array/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        int peakIndexInMountainArray(vector<int>& arr) {
            int n = arr.size();
            int low = 1;
            int high = n - 2;
            int mid;
            while (low<=high){
                mid = low + (high-low)/2;
                if (arr[mid] > arr[mid-1] && arr[mid] < arr[mid+1]){
                    low = mid + 1;
                }
                else if (arr[mid] < arr[mid-1] && arr[mid] > arr[mid+1]){
                    high = mid - 1;
                }
                else {
                    return mid;
                }
            }
            return -1;
        }
    };

int main(){
    
    return 0;
}