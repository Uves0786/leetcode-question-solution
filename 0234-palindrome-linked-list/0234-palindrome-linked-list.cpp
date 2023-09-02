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
        
         if(head == NULL || head->next == NULL){
            return (head);
        }
        
        ListNode *rev=NULL;
        ListNode *curr=head;
        while(curr!=NULL){
            ListNode *temp = new ListNode(curr->val);
            temp->next=rev;
            rev = temp;
            curr=curr->next;
        }
        while(head && rev){
            if(head->val != rev->val){
                return false;
            }
            head=head->next;
            rev=rev->next;
        }
        return true;
    }
};