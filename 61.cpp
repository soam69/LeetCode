// https://leetcode.com/problems/rotate-list/description/

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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head) return NULL;
        int size = 1;
        ListNode* temp = head;
        while(temp->next){
            size++;
            temp = temp->next;
        }
        temp->next = head;
        temp = temp->next;
        int skip = size - k%size;
        while(skip != 1){
            temp = temp->next;
            skip--;
        }
        ListNode* ans = temp->next;
        temp->next = NULL;
        return ans;
    }
};

int main(){
    
    return 0;
}