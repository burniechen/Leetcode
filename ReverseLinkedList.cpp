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
    ListNode* p1 = nullptr;
    ListNode* p2 = nullptr;
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr) {
            return p1;
        }
        p1 = new ListNode(head->val);
        p1->next = p2;
        p2 = p1;
            
        return reverseList(head->next);
    }
};
