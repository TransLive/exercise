#include "BinSearchTree.h"
#include "BinTree.h"
#include <stdlib.h>
#include <stdio.h>
BinTree creatBinSearchTree(int data[], int length)
{
	BinTree bst = creatTree();
	for (int i = 0;i < length;i++)
	{
		addSearchTree(&bst, data[i]);
	}
	return bst;
}

void addSearchTree(BinTree* bst, int data)
{
	TreeNode* t = creatTreeNode(data);
	TreeNode* T = bst->btRoot;
	if (isEmptyTree(bst))
	{
		bst->btRoot = t;
		return;
	}
	while (T != NULL)
	{
		if (data >= T->data)
		{
			if (T->right == NULL)
			{
				T->right = t;
				break;
			}
			else
			{
				T = T->right;
			}
		}
		if (data < T->data)
		{
			if (T->left == NULL)
			{
				T->left = t;
				break;
			}
			else
			{
				T = T->left;
			}
		}
	}
}

void delBinSearchTree(BinTree* bst, int data)
{
	bst->btRoot = delOneInBST(bst->btRoot,data);
}
void delAllNumInBST(BinTree* bst, int data)
{
	int counter = findInBST(bst, data);
	for (int i = 0;i < counter;i++)
	{
		delOneInBST(bst->btRoot, data);
	}
	printf("Deleted %d number %d from BST.\n",counter,data);
}
TreeNode* delOneInBST(TreeNode* bstNode,int data)
{
	TreeNode* T;
	if (bstNode == NULL)
	{
		printf("Didn't find!\n");
		return bstNode;
	}
	else if (data > bstNode->data) bstNode->right = delOneInBST(bstNode->right,data);
	else if (data < bstNode->data) bstNode->left = delOneInBST(bstNode->left, data);
	else
		if(bstNode->left && bstNode->right)	//Here finding the minimum in right-tree to replace the BST->data
		{
			bstNode->data = findMinNodeInBST(bstNode->right)->data;
			bstNode->right = delOneInBST(bstNode->right, bstNode->data);
		}
		else
		{
			T = bstNode;
			if (bstNode->left == NULL)
			{
				bstNode = bstNode->right;
				free(T);
			}
			else if (bstNode->right == NULL)
			{
				bstNode = bstNode->left;
				free(T);
			}
		}
	return bstNode;
}

TreeNode* findMinInBST(BinTree* bst)
{
	TreeNode* T = bst->btRoot;
	while (T->left != NULL)
	{
		T = T->left;
	}
	return T;
}

TreeNode* findMinNodeInBST(TreeNode* bst)
{
	TreeNode* T = bst;
	while (T->left != NULL)
	{
		T = T->left;
	}
	return T;
}

int findInBST(BinTree* bst, int data)
{
	int counter = 0;
	TreeNode* t;
	t = bst->btRoot;
	while (t != NULL)
	{
		if (data >= t->data)
		{
			if (data == t->data)
			{
				counter++;
			}
			t = t->right;
			continue;
		}
		else if (data < t->data)
		{
			t = t->left;
		}
	}
	return counter;
}

TreeNode* findMaxInBST(BinTree* bst, int data)
{
	TreeNode* T = bst->btRoot;
	while (T->right != NULL)
	{
		T = T->right;
	}
	return T;
}
