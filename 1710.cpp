// https://leetcode.com/problems/maximum-units-on-a-truck/description/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    public:
        static bool compare(vector<int> vec1, vector<int> vec2){
            return vec1[1] > vec2[1];
        }
        int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
            int units = 0;
            int i = 0;
            sort(boxTypes.begin(), boxTypes.end(), compare);
        
            while (truckSize>0 && i<boxTypes.size()){
                if(boxTypes[i][0] <= truckSize){
                    units += boxTypes[i][0] * boxTypes[i][1];
                    truckSize -= boxTypes[i][0];
                }
                else{
                    int fraction = truckSize;
                    truckSize -= fraction;
                    units += fraction * boxTypes[i][1];
                }
                i++;
            }
            return units;
        }
    };

int main(){
    
    return 0;
}