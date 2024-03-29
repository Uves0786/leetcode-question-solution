// *
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };

class Solution {
public:
    int getlenth(ListNode* head)
    {
        int len=0;
        while(head!=NULL)
        {
            len++;
            head=head->next;
        }
        return len;
    }
    ListNode* middleNode(ListNode* head)
    {
        int len=getlenth(head);
        ListNode* temp=head;
                int mid=len/2;
                int cnt=0;
                while(cnt<mid)
                {
                    temp=temp->next;
                    cnt++;
                }
                return temp;

            
    }
};