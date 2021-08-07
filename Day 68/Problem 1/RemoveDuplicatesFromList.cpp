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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        ListNode* prev=head;
        if(!head)return NULL;
        while(temp->next)
        {
            temp=temp->next;
            if(prev->val==temp->val)
            {
                prev->next=temp->next;
    
            }
            else
            {
                prev=prev->next;
            }
            
        }return head;
    }
};