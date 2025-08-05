// https://leetcode.com/problems/merge-sorted-array/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums3(nums1.begin(), nums1.begin() + m);
        int p1 = 0;
        int p2 = 0;
        int p3 = 0;
        for (auto i : nums3){
            cout << i << " ";
        }
        while (p1!=m and p2!= n){
            if (nums3[p1] < nums2[p2]){
                nums1[p3] = nums3[p1];
                p3++;
                p1++;
            }
            else{
                nums1[p3] = nums2[p2];
                p3++;
                p2++;
            }
        }
        if (p1 == m){
            while(p2!=n){
                nums1[p3] = nums2[p2];
                p3++;
                p2++;
            }
        }
        else{
            while(p1!=m){
                nums1[p3] = nums3[p1];
                p3++;
                p1++;
            }
        }
        
    }
};

int main(){
    
    return 0;
}