#ifndef _HEAPTREE_H_
#define _HEAPTREE_H_

typedef struct _HeapTree
{
	int* heapArr;
	int size;
	int capacity;
} HeapTree;

typedef struct _MaxHeap
{
	HeapTree* hTree;
} MaxHeap;
MaxHeap creatMaxHeap(int maxsize);
void insertMaxHeap(MaxHeap* maxheap, int data);
void insertAllInMHTree(MaxHeap* maxheap, int* dataArr);
#endif // !_HEAPTREE_H_
