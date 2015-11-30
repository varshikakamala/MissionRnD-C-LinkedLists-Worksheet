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
	struct node *newnode = NULL, *temp = NULL;
	int sum = 0,i=0,k,count=0;
	temp = head;
	while (temp->next != NULL)
	{
		sum += temp->data;
		if (temp->data == 2) i++;
		temp = temp->next;
		count++;
	}
	if (sum!= 0) 
	{
		temp = head;
		k = count - i;
		while (k != 0)
		{

		}
	}

}