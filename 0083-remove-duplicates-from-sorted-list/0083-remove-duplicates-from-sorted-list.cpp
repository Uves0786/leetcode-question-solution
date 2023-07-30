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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        ListNode* uni=NULL;
          ListNode* temp=head;
        set<int>st;
        while(head!=NULL)
        {
            st.insert(head->val);
            head=head->next;
        }
        for(auto it=st.rbegin(); it!=st.rend(); it++)
        {
            ListNode*temp=new ListNode(*it);
            temp->next=uni;
            uni=temp;
            
        }
        return uni;
        
    }
};