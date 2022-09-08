#include <stdio.h>
int main()
{
	struct ListNode* removeElements(struct ListNode* head, int val) {
		struct ListNode* cur = head, *prev = NULL;
		while (cur)
		{
			if (cur->val == val)
			{
				//1.ͷɾ
				//2.��ͷɾ
				if (cur == head)
				{
					head = head->next;
					free(cur);
					cur = head;
				}
				else
				{
					prev->next = cur->next;
					free(cur);
					cur = prev->next;
				}
			}
			else
			{
				prev = cur;
				cur = cur->next;
			}
		 }
		return head;
}