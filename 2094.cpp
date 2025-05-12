// https://leetcode.com/problems/finding-3-digit-even-numbers/description/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> ans;
        bool isPresent[999] = {false};
        int size = digits.size();
        int num = 0;
        for (int i = 0; i < size; i++){
            if (digits[i]%2 == 0){
                for (int j = 0; j < size; j++){
                    if( j != i and digits[j] != 0){
                        for (int k = 0; k < size; k++){
                            if ( k != j and k != i){
                                num = 100*digits[j] + 10*digits[k] + digits[i];
                                if (!isPresent[num]){
                                    ans.push_back(num);
                                    isPresent[num] = true;
                                }
                            }
                        }
                    }
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};

int main(){
    
    return 0;
}