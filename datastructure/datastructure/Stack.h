#ifndef _STACK_H_
#define _STACK_H_


typedef struct _StackNode
{
	int data;
	struct _StackNode* under;
} StackNode;

typedef struct _Stack
{
	StackNode* top;
} Stack;

Stack creatStack();
StackNode* creatStackNode(int data);

void pushStack(Stack* stack, int data);
int popStack(Stack* stack);
int isEmptyStack(Stack* stack);
#endif // !_STACK_H_