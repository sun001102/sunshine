#include <stdio.h>

	struct ListNode* reverseList(struct ListNode* head){
		struct ListNode* cur = head;
		struct ListNode* newhead = NULL;
		while (cur)
		{
			struct ListNode* next = cur->next;
			cur->next = newhead;
			newhead = cur;

			cur = next;
		}
		return newhead;
	}