// https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/description/

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
    int pairSum(ListNode* head) {
        int stack[100000];
        int top = -1;
        ListNode* temp = head;
        while (temp != NULL){
            stack[++top] = temp->val;
            temp = temp->next;
        }
        temp = head;
        int n = top/2;
        int max = 0;
        while (top != n){
            int sum = temp->val + stack[top--];
            if (sum > max) max = sum;
            temp = temp->next;
        }
        return max;
    }
};

int main(){
    
    return 0;
}