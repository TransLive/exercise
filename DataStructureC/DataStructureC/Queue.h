#ifndef _QUEUE_H_
#define _QUEUE_H_

typedef struct _QueueNode
{
	int data;
	struct _QueueNode* next;
} QueueNode;

typedef struct _Queue
{	
	QueueNode* front;
	QueueNode* rear;
} Queue;


Queue creatQueue();
int isEmptyQueue(Queue* queue);
void enQueue(Queue* queue,int data);
int deQueue(Queue* queue);
void printAndDeQueue(Queue* queue);
#endif // !_QUEUE_H_

