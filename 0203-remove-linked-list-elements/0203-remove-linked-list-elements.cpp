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
     ListNode* reverseList(ListNode* goot) 
       {
         if(goot==NULL || goot->next==NULL)
        {
            return goot;
        }
        ListNode* prev=NULL;
        ListNode* curr=goot;
        ListNode* forword=NULL;
        while(curr!=NULL)
        {
            forword=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forword;
        }
        return prev;
     }
    ListNode* removeElements(ListNode* head, int val)
    {
        ListNode* temp=head;
        ListNode* root=NULL;
        while(temp!=NULL)
        {
            if(temp->val!=val)
            {
                 ListNode*emp=new ListNode(temp->val);
                emp->next=root;
                root=emp;
            }
            temp=temp->next;
        }
        ListNode* re=reverseList(root);
        return re;
    }
};