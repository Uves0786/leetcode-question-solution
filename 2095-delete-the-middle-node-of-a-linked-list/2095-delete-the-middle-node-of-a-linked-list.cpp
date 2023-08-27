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
    ListNode* deleteMiddle(ListNode* head) {
        
        ListNode* mp=head;
        int size=0,count=0;
        while(mp!=NULL){
            size++;
            mp=mp->next;
        }
        int mid=size/2;
          ListNode* temp=head;
         if(head==NULL || head->next==NULL) return NULL;
        for(int i=0;i<mid;i++){
            if(i==mid-1){
              ListNode* to_delete=temp->next;
                temp->next=temp->next->next;
                delete to_delete;
 
            }
            temp=temp->next;
        }
        return head;
    }
};