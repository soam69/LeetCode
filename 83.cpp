// https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/

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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head or !head->next) return head;
        ListNode* check = head;
        ListNode* temp = head->next;
        while (temp){
            if(temp->val != check->val){
                check->next = temp;
                check = temp;
                temp = temp->next;
            }
            else temp = temp->next;
        }
        check->next = NULL;
        return head;
    }
};

int main(){
    
    return 0;
}