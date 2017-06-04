#include "LinkList.h"
#include <stdio.h>
#include <stdlib.h>
List creatList()
{
	List list;
	list.llHead = NULL;
	return list;
}


ListNode* creatListNode(int data)
{
	ListNode* lNode = (ListNode*)malloc(sizeof(ListNode));
	lNode->data = data;
	lNode->next = NULL;
	return lNode;
}

int isEmptyList(List* list)
{
	if (list->llHead == NULL) return 1;
	else return 0;
}

void addList(List *list,int data) 
{
	ListNode* l = creatListNode(data);
	ListNode* lLast = list->llHead;	
	if (list->llHead == NULL)
	{
		list->llHead = l;
	}
	else
	{
		while (lLast->next)
		{
			lLast = lLast->next;
		}
		lLast->next = l;
	}
}

void findList(List* list, int data)
{
	if (isEmptyList(list) == 1)
	{
		printf("The LIST is empty.\n");
		return;
	}
	ListNode* L;
	L = list->llHead;
	int isFound = 0;
	while (L != NULL)
	{
		if (L->data == data)
		{
			isFound++;
		}
		L = L->next;
	}
	printf("%d number %d was found in List.\n", isFound, data);
}


int listLength(List* list)
{
	if (isEmptyList(list) == 1)
	{
		printf("The LIST is empty.\n");
		return 0;
	}
	ListNode* l = list->llHead;
	int i;
	for (i = 0;l != NULL;i++)
	{
		l = l->next;
	}
	return i;
}

void printList(List* list)//ｱ鯊・ｴ｡
{
	if (isEmptyList(list) == 1)
	{	
		printf("ERROR:The LIST is empty.\n");
		return;
	}
	else {
		ListNode* l = list->llHead;
		while (l != NULL)
		{
			printf("%d\n", l->data);
			l = l->next;
		}
	}
}

void delList(List* list)//・ｳ譛ｱ・
{
	ListNode* p,*q;
	for (p = list->llHead;p;p = q)
	{
		q = p->next;
		free(p);
	}
}
void delListNode(List* list,int data)	//To Complete
{
	int isFound = 0;
	if (isEmptyList(list) == 1)
	{
		printf("ERROR:The LIST is empty.\n");
		return;
	}
	ListNode* L = list->llHead;
	ListNode* l = L;
	while (L != NULL)
	{
		if (L->data == data)
		{
			l->next = L->next;
			free(L);
			L = l;
			isFound++;
		}
		l = L;
		L = L->next;
	}
	printf("%d number %d has been deleted from List.\n", isFound, data);
}

int* convertListToArr(List* list)
{
	int* arr = (int*)malloc(listLength(list) * sizeof(int));
	for (int i = 0;i <= listLength(list);i++)
	{
		*(arr + i) = 1;
	}
	return arr;
}

