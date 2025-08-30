class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL || head->next == NULL) return head; 
        // Recurse on the rest of the list
        ListNode* front = reverseList(head->next); 
        // At this point front is the head of the reversed sublist
        head->next->next = head;  // link back
        head->next = NULL;        // break old link
        
        return front;
        
    }
};
