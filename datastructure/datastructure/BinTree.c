#include "BinTree.h"
#include <stdio.h>
BinTree creatTree()
{
	BinTree tree;
	tree.btRoot = NULL;
	return tree;	//?Y?E?w??????Y??????????
}

TreeNode* creatTreeNode(int data)
{
	TreeNode* tNode = (TreeNode*)malloc(sizeof(TreeNode));
	tNode->data = data;
	tNode->left = NULL;
	tNode->right = NULL;
	return tNode;
}

int isEmptyTree(BinTree* bintree)
{
	if (bintree->btRoot == NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void emptyTreeInfo()
{
	printf("The TREE is empty!\n");
}

BinTree levelBuildBinTree(int* dataArr, int length)
{
	BinTree bt = creatTree();
	bt.btRoot = creatTreeNode(dataArr[0]);
	TreeNode* T;
	Queue tq = creatQueue();
	enQueue(&tq,(int)bt.btRoot);
	for (int i = 1;i < length;i++)
	{
		T = (TreeNode*)deQueue(&tq);
		if (i < length)
		{
			T->left = creatTreeNode(dataArr[i]);
			enQueue(&tq, (int)T->left);
			i++;
		}
		if (i < length)
		{
			T->right = creatTreeNode(dataArr[i]);
			enQueue(&tq, (int)T->right);
		}
	}
	return bt;
}

BinTree preBuildBinTree(int* dataArr, int length)
{
	int counter = -1;
	BinTree bt = creatTree();
	preBBT(bt.btRoot,dataArr,length,counter);
	return bt;

}void preBBT(TreeNode* bintree,int* dataArr, int length,int counter)//To Complete
{
	if (counter<length)
	{
		counter++;
		bintree = creatTreeNode(dataArr[counter]);
		preBBT(bintree->left, dataArr, length, counter);
		preBBT(bintree->right, dataArr, length, counter);
	}
	else return;
}


void preTraversalTree(BinTree* bintree)
{
	if (isEmptyTree(bintree))
	{
		emptyTreeInfo();
		return;
	}
	preTT(bintree->btRoot);
	printf("\n");
}void preTT(TreeNode* treenode)
{
	if (treenode != NULL)
	{
		printf("%-5d", treenode->data);
		preTT(treenode->left);
		preTT(treenode->right);
	}
}
void inTraversalTree(BinTree* bintree)
{
	if (isEmptyTree(bintree))
	{
		emptyTreeInfo();
		return;
	}
	inTT(bintree->btRoot);
	printf("\n");
}void inTT(TreeNode* treenode)
{
	if (treenode != NULL)
	{
		inTT(treenode->left);
		printf("%-5d", treenode->data);
		inTT(treenode->right);
	}
}
void postTraversalTree(BinTree* bintree)
{
	if (isEmptyTree(bintree))
	{
		emptyTreeInfo();
		return;
	}
	postTT(bintree->btRoot);
	printf("\n");
}void postTT(TreeNode* treenode)
{
	if (treenode != NULL)
	{
		postTT(treenode->left);
		postTT(treenode->right);
		printf("%-5d", treenode->data);
	}
}

void levelTraversalTree(BinTree* bintree)
{
	if (isEmptyTree(bintree))
	{
		emptyTreeInfo();
		return;
	}
	TreeNode* T = bintree->btRoot;
	Queue tq = creatQueue();
	enQueue(&tq, (int)T);
	while (isEmptyQueue(&tq) == 0)
	{
		T = (TreeNode*)deQueue(&tq);
		printSinData(T->data);
		if (T->left != NULL)
		{
			enQueue(&tq,(int)T->left);
		}
		if (T->right != NULL)
		{
			enQueue(&tq,(int)T->right);
		}
		
	}printf("\n");
}

int heightOfTree(BinTree* bintree)
{
	int height = 0;
	if (isEmptyTree(bintree) == 1)
	{
		emptyTreeInfo();
		return 0;
	}
	height = hofTree(bintree->btRoot,height);
	return height;
} int hofTree(TreeNode* treenode, int height)
{
	if (treenode == NULL)
	{
		return height;
	}
	TreeNode* T = treenode;
	height++;
	int hLeft = height;
	int hRight = height;
	hLeft = hofTree(T->left, hLeft);
	hRight = hofTree(T->right, hRight);
	if (hRight >= hLeft)
	{
		return hRight;
	}
	else {
		return hLeft;
	}
}
