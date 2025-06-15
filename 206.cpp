// https://leetcode.com/problems/reverse-linked-list/description/

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
    ListNode* reverseList(ListNode* head) {
        if (head == NULL or head->next == NULL){
            return head;
        }
        ListNode* stack[5000];
        int top = -1;
        ListNode* temp = head;
        while (temp != NULL){
            stack[++top] = temp;
            temp = temp->next;
        }
        ListNode* ans = stack[top--];
        temp = ans;
        while (top != -1){
            temp->next = stack[top--];
            temp = temp->next; 
        }
        temp->next = NULL;
        return ans;
    }
};
int main(){
    
    return 0;
}