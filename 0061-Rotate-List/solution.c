/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    if(head == NULL) return head;
   struct ListNode* slow = head;
   struct ListNode* fast = head;
   int size = 1;
   while(fast->next!= NULL){
    fast = fast->next;
    size++;
   }
   fast = head;
   k = k % size;
   while(k){
    fast = fast->next;
    k--;
   }
   while(fast->next != NULL){
    fast = fast->next;
    slow = slow->next;
   }
    fast->next = head;
    head = slow->next;
    slow->next = NULL;
    return head;
}