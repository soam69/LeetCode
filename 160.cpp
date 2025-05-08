#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
    public:
        ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
            int size1 = 1;
            int size2 = 1;
            int skip = 0;
            ListNode* temp1 = headA;
            ListNode* temp2 = headB;
            while (temp1->next != NULL){
                size1++;
                temp1 = temp1->next;
            }
            while (temp2->next != NULL){
                size2++;
                temp2 = temp2->next;
            }
    
            cout << size1 << size2 ;
            if (temp1 != temp2) return NULL;
            if (size1 > size2) {
                skip = size1 - size2;
                temp1 = headA;
                temp2 = headB;
                for (int i = 0; i < skip; i++){
                    temp1 = temp1->next;
                }
            }
            else {
                skip = size2 - size1;
                temp1 = headA;
                temp2 = headB;
                for (int i = 0; i < skip; i++){
                    temp2 = temp2->next;
                }
            }
            while (temp1 != temp2){
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
            
        return temp1;
        }
};

int main(){
    
    return 0;
}