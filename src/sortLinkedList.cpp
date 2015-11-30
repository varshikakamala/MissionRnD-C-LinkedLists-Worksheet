/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) {
	struct node *temp =NULL,*prev=NULL;
	int i,j,value;
	if(head==NULL) return NULL;
	else if (head->next == NULL) return head;
	else if (head->next!=NULL)
	{
		prev = head;
		while (prev!=NULL)
		{
			temp = prev->next;
			while (temp!=NULL)
			{
			if (prev->num>temp->num)
				{
				/*	prev->num = prev->num + temp->num;
					temp->num = prev->num - temp->num;
					prev->num = prev->num - prev->num;*/
					value = prev->num;
					prev->num = temp->num;
					temp->num =value;
				}
				temp = temp->next;
			}
			prev = prev->next;
		}
	}
  return head;
}