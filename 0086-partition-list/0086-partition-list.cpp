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
    ListNode* partition(ListNode* head, int x) 
    {
         vector<int>v1,v2;
        ListNode* temp=head;
        ListNode* small=NULL;
        while(temp!=NULL)
        {
            if(temp->val<x)
            {
                v1.push_back(temp->val);
            }
            else
            {
                v2.push_back(temp->val);
            }
            temp=temp->next;
        }
        ListNode* root=NULL;
        for(int i=v2.size()-1;i>=0;i--)
        {
             ListNode* tem=new ListNode(v2[i]);
            tem->next=root;
            root=tem;
        }
        for(int i=v1.size()-1;i>=0;i--)
        {
             ListNode* tem=new ListNode(v1[i]);
            tem->next=root;
            root=tem;
        }
        
        return root;
    }
};