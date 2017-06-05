#include "Queue.h"
#include <stdlib.h>
#include <stdio.h>
Queue creatQueue()
{
	Queue q;
	q.front = q.rear = NULL;
	return q;
}

QueueNode* creatQueueNode(int data)
{
	QueueNode* qNode = (QueueNode*)malloc(sizeof(QueueNode));
	qNode->data = data;
	qNode->next = NULL;
	return qNode;
}

void enQueue(Queue* queue, int data)
{
	QueueNode* q = creatQueueNode(data);
	if (queue->front == queue->rear)	//Only one element remains in queue
	{
		QueueNode* p = queue->rear;
		queue->rear = q;
		queue->front = p;
		if (queue->front != NULL)
		{
			queue->front->next = queue->rear;
		}
		else
		{
			queue->front = queue->rear;
		}
		return;
	}
	if (queue->rear == NULL)	//ｵﾚｶｴﾎ
	{
		queue->rear = q;
		queue->front->next = queue->rear;
		return;
	}
	if (queue->rear != NULL)	//ｵﾚnｴﾎ
	{
		queue->rear->next = q;
		queue->rear = queue->rear->next;
		return;
	}
}

int deQueue(Queue* queue)
{
	QueueNode* qFront = queue->front;
	if (isEmptyQueue(queue))
	{
		printf("ERROR:The QUEUE is empty.\n");
		return -9527;
	}
	else if (queue->front == queue->rear)//ﾖｻﾊ｣ﾏﾂﾒｻ・ﾔｪﾋﾘ｣ｬ硤ｵﾈ・ﾁﾋﾎｲ
	{
		int data = queue->front->data;
		queue->front = queue->rear = NULL;
		return data;
	}
	else
	{
		int data = queue->front->data;
		queue->front = queue->front->next;
		free(qFront);
		return data;
	}
}

int isEmptyQueue(Queue* queue) //ｿﾕｵﾄﾔ長ｵｻﾘ1｣ｬｷt樣0
{
	if (queue->front == NULL)
	{
		return 1;
	}
	else return 0;
}

void printAndDeQueue(Queue* queue)
{
	printf("%d", deQueue(queue));
}
