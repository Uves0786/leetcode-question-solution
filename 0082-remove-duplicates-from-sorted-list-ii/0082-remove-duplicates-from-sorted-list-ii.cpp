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
        map<int,int>mp;
        ListNode* uni=NULL;
        ListNode* temp=head;
        while(head!=NULL)
        {
            mp[head->val]++;
            head=head->next;
        }
         for(auto it=mp.rbegin(); it!=mp.rend(); it++)
         {
             if(it->second==1)
             {
                  ListNode*temp=new ListNode(it->first);
                    temp->next=uni;
                    uni=temp;
             }
         }
        return uni;
    }
};