// https://leetcode.com/problems/remove-linked-list-elements/description/

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
        ListNode* removeElements(ListNode* head, int val) {
            ListNode dummy(0,head);
            ListNode* prev = &dummy;
            ListNode* temp = head;
    
            while(temp!= NULL){
                if (temp->val == val){
                    prev->next = temp->next;
                    temp = temp->next;
                }
                else{
                    temp = temp->next;
                    prev = prev->next;
                }
            }
    
            return dummy.next;
    
            
        }
};

int main(){
    
    return 0;
}

