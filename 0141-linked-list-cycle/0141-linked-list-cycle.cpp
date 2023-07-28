/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) 
    {
      if(head==NULL)
      {
          return false;
      }
       ListNode* temp=head;
      ListNode* remp=head;
       while(temp!=NULL && temp->next!=NULL)
       {
           temp=temp->next->next;
           remp=remp->next;
            if(temp==remp)
            {
                return true;
            }
       }
        return false;
    }
};