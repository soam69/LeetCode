// https://leetcode.com/problems/palindrome-linked-list/description/

#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        int stack[100000];
        int top = -1;
        ListNode* temp = head;
        while (temp != NULL){
            stack[++top] = temp->val;
            temp = temp->next;
        }
        temp = head;
        while (top != -1){
            if (stack[top--] != temp->val) return false;
            temp = temp->next;
        }
        return true;
    }
};

int main(){
    
    return 0;
}