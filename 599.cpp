// https://leetcode.com/problems/minimum-index-sum-of-two-lists/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int size1 = list1.size();
        int size2 = list2.size();
        vector<string> ans;
        int min = INT_MAX;
        for (int i = 0; i < size1; i++ ){
            for (int j = 0; j < size2; j++){
                if (list1[i] == list2[j]){
                    if (i+j < min){
                        min = i+j;
                        ans.clear();
                        ans.push_back(list1[i]);
                    }
                    else if (i+j == min){
                        ans.push_back(list1[i]);
                    }
                }
            }
        }
        return ans;
    }
};

int main(){
    
    return 0;
}