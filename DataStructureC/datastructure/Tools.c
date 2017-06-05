#include "Tools.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int* randomArr(int length,int range)
{
	int* arr = (int*)malloc(length * sizeof(int));
	srand((int)time(NULL));
	for (int i = 0;i < length;i++)
	{
		*(arr+i) = rand() % range;
	}
	return arr;
}

int randomNum(int range)
{
	srand((int)time(NULL));
	int rn = rand() % range;
	return rn;
}

int* positiveSqcNum(int length,int begin, int last)
{
	if (last - begin <= 0)
	{
		printf("ERROR:Too short.\n");
	}
	int* arr = (int*)malloc((last-begin) * sizeof(int));
	for (int i = begin;i <= last;i++)
	{
		*(arr + i) = i;
	}
	return arr;
}

void printArr(int* arr, int length)
{
	for (int i = 0;i < length;i++)
	{
		printf("%d\n", arr[i]);
	}
}

void printSinData(int data)
{
	printf("%-5d", data);
}

int isPower(int num)
{
	if (num == 1)
	{
		return 1;
	}
	else
	{
		do
		{
			if (num % 2 == 0) num /= 2;
		} while (num != 1);
	}
	return 0;
}
