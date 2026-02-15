// https://leetcode.com/problems/number-of-students-doing-homework-at-a-given-time/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int size = startTime.size();
        int ans = 0;
        for(int i = 0; i < size; i++){
            if(queryTime <= endTime[i] and queryTime >= startTime[i]) ans++;
        }
        return ans;
    }
};

int main(){
    
    return 0;
}