#ifndef _LINK_LIST_
#define _LINK_LIST_

typedef struct _ListNode
{
	int data;
	struct _ListNode* next;
} ListNode;

typedef struct _List
{
	ListNode* llHead;
} List;


List creatList();
ListNode* creatListNode(int data);
int isEmptyList(List* list);
void addList(List *list, int data);
void findList(List* list, int data);
void printList(List* list);
void delListNode(List* list, int data);
void delList(List* list);
int listLength(List* list);
int* convertListToArr(List* list);
#endif