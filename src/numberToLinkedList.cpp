/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
}*first=NULL,*temp=NULL,*newnode=NULL;

struct node * numberToLinkedList(int N)
{
	if (N == 0)
	{
		newnode = (struct node *)malloc(sizeof(struct node));
		newnode->num = 0;
		newnode->next = NULL;
		first = newnode;
		temp = first;
	}
	else
	{
		if (N < 0)
			N = (N*(-1));
		newnode = (struct node *)malloc(sizeof(struct node));
		newnode->num = N % 10;
		newnode->next = NULL;
		N /= 10;
		first = newnode;
		temp = newnode;
		while (N != 0)
		{
			newnode = (struct node *)malloc(sizeof(struct node));
			newnode->num = N % 10;
			N /= 10;
			newnode->next = temp;
			first = newnode;
			temp = newnode;
		}
	}
		return temp;
}
