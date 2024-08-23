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
    ListNode* mergeTwoLists(ListNode* A, ListNode* B) {
        // base case
        if (A == nullptr) {
            return B;
        }
        if (B == nullptr) {
            return A;

        }
        // work case 
      if (A->val < B->val) {
        A->next = mergeTwoLists(A->next,B);
        return A;
      }else {
        B->next = mergeTwoLists(A,B->next);
        return B;
      }
        
    }
};