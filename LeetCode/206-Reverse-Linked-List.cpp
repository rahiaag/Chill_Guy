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
    ListNode* reverseList(ListNode* head) {

        ListNode *prev=NULL;
        ListNode *p=head;

        while (p!=NULL){
            ListNode *temp=p->next;
            p->next=prev;
            prev=p;
            p=temp;
        }

        return prev;

     /*   stack <int> st;
        ListNode *temp=head;

        while (temp!=NULL){
            st.push(temp->val);
            temp=temp->next;
        }
        temp=head;
        while (!st.empty()){
            temp->val=st.top();
            st.pop();
            temp=temp->next;
        }
        return head;
        */
    }
};