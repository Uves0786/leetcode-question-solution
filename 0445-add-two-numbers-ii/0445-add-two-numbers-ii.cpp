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
     stack<int> helper(ListNode* head)
      {
          stack<int>st;
          while(head)
          {
              st.push(head->val);
              head=head->next;
          }
          return st;
      }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        stack<int>s1,s2;
        s1=helper(l1);
        s2=helper(l2);
        int carry = 0;
        ListNode* head = nullptr;
        while(!s1.empty() || !s2.empty() || carry!=0)
        {
            int sum=carry;
           if (!s1.empty()) {
                sum += s1.top();
                s1.pop();
            }
           if (!s2.empty()) {
                sum += s2.top();
                s2.pop();
            }
            ListNode* temp = new ListNode(sum % 10);
            temp->next=head;
            head=temp;
            carry=sum/10;
        }
        return head;
    }
};