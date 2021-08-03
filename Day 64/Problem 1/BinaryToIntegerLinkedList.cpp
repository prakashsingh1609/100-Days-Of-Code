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
    int getDecimalValue(ListNode* head) {
        string s = "";
        while(head!=NULL){
            s=s+ to_string(head->val);
            head=head->next;
        }
        //auto n = stoi(s);
        int a=0,ans=0;
        int b = s.length();
        while(b>0){
            int r = s[b-1] - '0';
            b--;
            ans = ans + pow(2,a)*r;
            a++;
            
        }
        return ans;
    }
};