#include <limits.h>
#include "HeapTree.h"
#include <stdlib.h>
#include <stdio.h>
MaxHeap creatMaxHeap(int maxsize)
{
	 
	MaxHeap H = { (HeapTree*)malloc(sizeof(HeapTree))};
	H.hTree->heapArr = (int*)malloc(maxsize * sizeof(int));
	H.hTree->heapArr[0] = INT_MAX;
	H.hTree->size = 0;
	H.hTree->capacity = maxsize+1;
	return H;
}

void insertMaxHeap(MaxHeap* maxheap,int data)
{
	if (maxheap->hTree->size >= maxheap->hTree->capacity)
	{
		printf("The heap is full.\n");
		return;
	}
	else
		maxheap->hTree->heapArr[++(maxheap->hTree->size)] = data;
	for (int i = maxheap->hTree->size;i > 0;i /= 2)
	{
		if (maxheap->hTree->heapArr[i] > maxheap->hTree->heapArr[i / 2])
		{
			maxheap->hTree->heapArr[i] = maxheap->hTree->heapArr[i / 2];
			maxheap->hTree->heapArr[i / 2] = data;
		}
	}
}


void insertAllInMHTree(MaxHeap* maxheap,int* dataArr)
{
	for (int i = 0;i < maxheap->hTree->capacity;i++)
	{
		insertMaxHeap(maxheap,dataArr[i]);
	}
}
