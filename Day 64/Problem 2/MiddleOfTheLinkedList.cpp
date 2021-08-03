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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int c=0;
        while(head!=NULL){
            c++;
            head=head->next;
        }
        int r=c/2 ;
        while(r>0){
            temp = temp->next;
            r--;
        }
        return temp;
    }
};