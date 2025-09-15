// https://leetcode.com/problems/maximum-number-of-words-you-can-type/description/

#include <iostream>
#include <set>
using namespace std;

class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int count = 0;
        set <char>broken;
        for (char c : brokenLetters){
            broken.insert(c);
        }
        text = text + " ";
        int size = text.length();
        for (int i = 0; i < size; i++){
            if (broken.find(text[i]) != broken.end()){
                while (i < size and text[i] != ' '){
                    i++;
                }
            }
            else if (text[i] == ' '){
                count++;
            }
        }
        return count;
    }
};

int main(){
    
    return 0;
}