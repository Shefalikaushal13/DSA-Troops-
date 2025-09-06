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

    ListNode* reverseList(ListNode* head)
    {
        ListNode* curr = head; 
        ListNode* prev = NULL; 
        ListNode* front = NULL; 

        while(curr!=NULL)
        {
            front = curr->next; 
            curr->next = prev; 
            prev = curr; 
            curr = front;
        }
        return prev; 

    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head; 
        ListNode* fast = head; 
        while(fast->next!=NULL && fast->next->next!=NULL) // we want the left middle
        {
            slow = slow ->next; 
            fast = fast->next->next; 
        }
        // slow will be at left middle 
        ListNode* reverseHead = reverseList(slow->next);
        ListNode* temp = head; 

        while(reverseHead!=NULL) // need to check only the last part 
        {
            if(reverseHead->val != temp->val) return false; 
            temp = temp -> next; 
            reverseHead = reverseHead -> next; 

        }
        return true; 

        
        
    }
};
