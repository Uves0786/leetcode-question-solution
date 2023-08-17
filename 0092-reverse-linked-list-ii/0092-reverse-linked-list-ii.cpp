class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int> buff;
        ListNode *p = head;
        int i = 0;
        
        while (p != nullptr) {
            buff.push_back(p->val);
            p = p->next;
            i++;
        }
        
        while (left < right) {
            swap(buff[left - 1], buff[right - 1]);
            left++;
            right--;
        }
        
        ListNode* newHead = new ListNode(buff[0]);
        ListNode* current = newHead;
        
        for (int i = 1; i < buff.size(); i++) {
            ListNode* newNode = new ListNode(buff[i]);
            current->next = newNode;
            current = newNode;
        }
        
        return newHead;
    }
};