// https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int size = 0;
        while(temp!=NULL){
            size++;
            temp = temp->next;
        }
        int target = size - n;
        temp = head;
        if (target == 0) return head->next;
        while(target > 1){
            temp = temp->next;
            target--;
        }
        temp->next = temp->next->next;
        return head;
    }
};

int main(){
    
    return 0;
}