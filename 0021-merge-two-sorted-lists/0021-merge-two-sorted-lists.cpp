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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>v1;
        ListNode* temp=list1;
        ListNode* remp=list2;
        while(temp!=NULL){
            v1.push_back(temp->val);
            temp=temp->next;
        }
        while(remp!=NULL){
            v1.push_back(remp->val);
            remp=remp->next;
        }
        sort(v1.rbegin(),v1.rend());
        ListNode* uni=NULL;
        for(vector<int>::iterator it = v1.begin(); it!=v1.end(); it++)
        {
            ListNode*sort=new ListNode(*it);
            sort->next=uni;
            uni=sort;
        }
        return uni;
    }
};