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
     int len(ListNode*head)
    {
         ListNode* temp = head;
        int count = 0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
         int size=len(head);
        int mid=size-n;
         if(head==NULL || head->next==NULL) return NULL;
        ListNode* temp=head;
        if(size==n)
        {
             ListNode* todelete =temp;
               temp=temp->next;
                delete todelete;
            return temp;
        }
        else{
            for(int i=0;i<mid;i++)
        {
            if(i==mid-1)
            {
                ListNode* todelete = temp->next;
                temp->next=temp->next->next;
                delete todelete;
            }
            temp=temp->next;
        }
        return head;
        }
    }
};