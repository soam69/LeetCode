// https://leetcode.com/problems/baseball-game/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> arr;
        int i = -1;
        int sum = 0;
        for (string s : operations){
            if (s == "+"){
                arr.push_back(arr[i] + arr[i-1]);
                i++;
            }
            else if (s == "D"){
                arr.push_back(arr[i]*2);
                i++;
            }
            else if (s == "C"){
                arr.pop_back();
                i--;
            }
            else{
                arr.push_back(stoi(s));
                i++;
            }

        }
        for(int i : arr){
            sum += i;
        }
        return sum;
    }
};

int main(){
    
    return 0;
}