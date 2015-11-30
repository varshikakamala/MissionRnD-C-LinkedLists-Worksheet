/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head){
	struct node *temp = head;
	int count0 = 0,count1 = 0;
	while (temp!= NULL)
	{
		if (temp->data == 0) count0++;
		else if (temp->data == 1) count1++;
		temp = temp->next;
	}
		while (count0!=0)
		{
			head->data = 0;
			head = head->next;
			count0--;
		}
		while (count1!=0)
		{
			head->data = 1;
			head = head->next;
			count1--;
		}
		while (head!=NULL)
		{
			head->data = 2;
			head = head->next;
		}
	}
