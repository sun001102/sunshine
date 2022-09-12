#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
 /* Definition for singly-linked list.*/
  struct ListNode {
      int val;
      struct ListNode *next;
 };

struct ListNode* middleNode(struct ListNode* head) {
	struct ListNode* fast, * slow;
	slow = fast = head;
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}