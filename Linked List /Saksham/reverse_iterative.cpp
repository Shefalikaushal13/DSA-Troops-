class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* current = head; 
        ListNode* Next = NULL; 
        ListNode* prev = NULL; 
        while(current!=NULL)
        {
            Next = current->next; 
            // now cut and update the connection 
            current->next = prev; 
            // update the previous before leaving current 
            prev = current; 
            // update the current 
            current = Next; 
        }     
        return prev;   
    }
};