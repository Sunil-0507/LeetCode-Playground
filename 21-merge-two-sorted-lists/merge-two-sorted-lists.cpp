/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy=new ListNode(-1);
        ListNode*t=dummy;
        ListNode* t1=list1;
        ListNode* t2=list2;
        while(t1 && t2){
            if(t1->val<=t2->val){
                t->next=t1;
                t=t1;
                t1=t1->next;
            }
            else{
                t->next=t2;
                t=t2;
                t2=t2->next;
            }
        }
        if(t1) t->next=t1;
        if(t2) t->next=t2;
        return dummy->next;
    }
};