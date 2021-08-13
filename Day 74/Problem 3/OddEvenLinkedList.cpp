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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL || head->next->next==NULL)
            return head;
        ListNode* ptr1 = head;
        ListNode* ptr2 = head->next->next;
        ListNode* end=ptr1->next; ListNode* prevend;
        while(ptr2!=NULL)
        {
            prevend=end;
            end=end->next;
            if(end!=NULL)
                end=end->next;
            ListNode* temp = ptr2->next;
            if(temp!=NULL)
                temp=temp->next;
            ListNode* temp2 = ptr1->next;
            ptr1->next=ptr2;
            ptr2->next=temp2;
            prevend->next=end;
            ptr1=ptr2;
            ptr2=temp;
        }
        return head;
    }
};