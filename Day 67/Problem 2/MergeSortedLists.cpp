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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
     ListNode *last = NULL;
ListNode *first = NULL;

 if(l1 == NULL)
     return l2;
 if (l2 == NULL)
     return l1;
 if(l1->val > l2->val)
 {
   last = l2;
   first = l2;
   l2 = l2->next;
   last->next = NULL;

 }
 else
 {
     last = l1;
     first = l1;
     l1 = l1->next;
     last->next = NULL;

 }
 while(l1 != NULL && l2 != NULL)
 {
     if(l1->val > l2->val)
     {
         last->next = l2;

         last = l2;
         l2 = l2->next;

         last->next = NULL;
     }
     else
     {
         last->next = l1;
         last = l1;
         l1 = l1->next;

         last->next = NULL;
     }
 }
 if(!l1)last->next = l2;
 if(!l2) last->next = l1;
 return first;   
    }
};