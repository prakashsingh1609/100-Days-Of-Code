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
    bool isPalindrome(ListNode* head) {
         stack<int> st;
        ListNode* curr= head;
        
        while(curr!=NULL){
            st.push(curr->val);
            curr=curr->next;
        }
        curr=head;
        while(curr!=NULL){
            int el=st.top();
            if(curr->val!= el) return false;
            st.pop();
            curr=curr->next;
        }
        
        return true;
    }
};