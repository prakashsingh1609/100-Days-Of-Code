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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *curr = list1;
    
    for(int i=1;i<a;i++)
        curr = curr->next;
    
    ListNode *temp1 = curr;
    
     ListNode *ar = list1;
    for(int i=0;i<b;i++)
      ar = ar->next;
    
    ListNode * car = list2;
    
    while(car->next !=0)
         car = car->next;
    
    curr->next = list2;
    car->next = ar->next;
    
    return list1;
    }
};