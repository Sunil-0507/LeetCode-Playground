class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
       
        if (head == nullptr || head->next == nullptr){
            return nullptr;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        fast=fast->next->next;

        while (fast != nullptr && fast->next != nullptr) {
            
            slow = slow->next;
            fast = fast->next->next;
        }

        
        ListNode* midd=slow->next;
        slow->next=slow->next->next;
        delete midd;
        return head;
    }
};
