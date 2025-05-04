// https://leetcode.com/problems/merge-k-sorted-lists/

#include <iostream>
#include <vector>
#include <algorithm>
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
        ListNode* mergeKLists(vector<ListNode*>& lists) {
            vector<int> vec;
    
            for (auto i : lists){
                ListNode* temp = i;
                while(temp != NULL){
                    vec.push_back(temp->val);
                    temp = temp->next;
                }
            }
    
            sort(vec.begin(),vec.end());
    
            ListNode ans;
            ListNode* temp = &ans;
            for(auto i : vec){
                ListNode* curr = new ListNode;
                curr->val = i;
                temp->next = curr;
                temp = temp->next;
            }
            return ans.next;
        }
};
int main(){
    
    return 0;
}