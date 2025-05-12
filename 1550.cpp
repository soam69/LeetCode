// https://leetcode.com/problems/three-consecutive-odds/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int size = arr.size();
        for (int i = 0; i < size - 2; i++){
            if (arr[i]%2 != 0 and arr[i + 1]%2 != 0 and arr[i + 2]%2 != 0){
                return true;
            }
        }
        return false;
    }
};

int main(){
    
    return 0;
}