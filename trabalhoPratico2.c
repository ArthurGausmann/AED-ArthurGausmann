/*
61.
Given the head of a linked list, rotate the list to the right by k places.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    if (head == NULL || head->next == NULL || k == 0) {
        return head;
    }

    int len = 1;
    struct ListNode* cauda = head;
    while (cauda->next != NULL) {
      len++;
      cauda = cauda->next;
    }

    k = k % len;
    if (k == 0) return head;

    int max = len - k;
    struct ListNode* ponteiro = head;

    for (int i = 1; i < max; i++) {
      ponteiro = ponteiro->next;
    }

    struct ListNode* atual = ponteiro->next;
    ponteiro->next = NULL;
    cauda->next = head;

    return atual;
}