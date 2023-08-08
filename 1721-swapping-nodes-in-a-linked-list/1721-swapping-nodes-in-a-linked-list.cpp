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
    ListNode* swapNodes(ListNode* head, int k) 
    {
         int size=len(head);
        if(head==NULL)
        {
            return NULL;
        }
        if(head->next==NULL)
        {
            return head;
        }
        if(size==k)
        {
            ListNode* first_node=head;
            ListNode* last_node=NULL;
            ListNode* temp=head;
            while(temp->next!=NULL)
            {
                last_node=temp->next;
                temp=temp->next;
            } 
            swap(first_node->val,last_node->val);
            return head;
        }
        int index=0,second_index=0;
         ListNode* first=NULL;
         ListNode* second=NULL;
         ListNode* temp=head;
        ListNode* curr=head;
        while(index<k)
        {
            first=temp;
            temp=temp->next;
            index++;
        }
        while(second_index<(size-k))
        {
            second=curr->next;
            curr=curr->next;
            second_index++;
        }
        swap(first->val,second->val);
        return head;
    }
};