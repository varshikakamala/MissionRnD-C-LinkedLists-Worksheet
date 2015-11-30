/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	struct node *temp = NULL, *prev = NULL;
	int count = 1,pos=0,i=1;
	if(head==NULL) return NULL;
	else if (K == 0 || K<0 || K==1)  return NULL;
		else
		{
			temp = head;
			while (temp->next != NULL)
			{
				temp = temp->next;
				count++;
			}
			if (K > count) return head;
			else
			{
				temp = head;
				while (temp!= NULL)
				{
					pos++;
					if (pos == (K*i))
					{
						prev->next = temp->next;
						i++;
					}
					prev = temp;
					temp = temp->next;
				}
			}
		}
	prev = head;
		return prev;
}