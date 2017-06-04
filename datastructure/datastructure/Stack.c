#include "Stack.h"
#inlcude <stdio.h>
Stack creatStack()
{
	Stack stk;
	stk.top = NULL;
	return stk;
}
StackNode* creatStackNode(int data)
{
	StackNode* stkNode = (StackNode*)malloc(sizeof(StackNode));
	stkNode->data = data;
	stkNode->under = NULL;
	return stkNode;
}
void pushStack(Stack* stack, int data)
{
	StackNode* stk = creatStackNode(data);
	if (isEmptyStack(stack) == 1)
	{
		stack->top = stk;
		return;
	}
	else
	{
		stk->under = stack->top;
		stack->top = stk;
		return;
	}
}
int popStack(Stack* stack)
{
	if (isEmptyStack(stack) == 1)
	{
		printf("ERROR:The STACK is empty!\n");
		return -9527;
	}
	int data = stack->top->data;
	StackNode* stk = stack->top;
	stack->top = stack->top->under;
	free(stk);
	return data;
}

int isEmptyStack(Stack* stack)
{
	if (stack->top == NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
