// https://leetcode.com/problems/merge-two-sorted-lists/description/

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
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
            ListNode* temp1 = list1;
            ListNode* temp2 = list2;
            ListNode head;
            ListNode* temp = &head;
            while (temp1!=NULL and temp2!= NULL){
                if (temp1->val < temp2->val){
                    temp->next = temp1;
                    temp1 = temp1->next;
                    temp = temp->next;
                }
                else {
                    temp->next = temp2;
                    temp2 = temp2->next;
                    temp = temp->next;
                }
            }
            if (temp1 == NULL){
                    temp->next = temp2;
                }
    
                else{
                    temp->next = temp1;
                }
            return head.next;
        }
    };

int main(){
    
    return 0;
}