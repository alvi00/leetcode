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
    ListNode* reverseList(ListNode* head) {
      ListNode *prev=nullptr;
      ListNode *alvi=head;

      while(alvi!=nullptr){
          ListNode *next=alvi->next;
          alvi->next=prev;
          prev=alvi;
          alvi=next;
      }
      return prev;
    }
};
