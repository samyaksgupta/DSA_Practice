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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode* dummy = new ListNode(0);
       dummy->next = head;
       ListNode* A = dummy;
       ListNode* B = dummy;

       for ( int i = 0; i < n+1 ; i++) {
        A = A->next;
       }
       while(A) {
        B = B->next;
        A = A->next;
       }
       B->next = B->next->next;
       return dummy->next;

    }
};