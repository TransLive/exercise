#include "AVLTree.h"
#include <stdio.h>
#include <stdlib.h>
AVLTreeNode* creatAVLTreeNode(int data)
{
	AVLTreeNode* avltNode = (AVLTreeNode*)malloc(data*sizeof(AVLTreeNode));
	avltNode->data = data;
	avltNode->left = NULL;
	avltNode->right = NULL;
	avltNode->height = 1;
	return avltNode;
}

AVLTree creatAVLTree()
{
	AVLTree avlt;
	avlt.avltRoot = NULL;
	return avlt;
}

void insertAVLTree(AVLTree* avlTree,int data)
{
	if (avlTree->avltRoot == NULL)
	{
		AVLTreeNode* avlt = creatAVLTreeNode(data);
		avlTree->avltRoot = avlt;
		return;
	}
	else {
		inAVLTree(avlTree->avltRoot,data);
	}
}void inAVLTree(AVLTreeNode* avltreenode,int data)
{
	if (avltreenode == NULL)
	{
		avltreenode = creatAVLTreeNode(data);
		avltreenode->height++;
		return;
	}
	AVLTreeNode* avlt = avltreenode;
	if (data >= avlt->data) inAVLTree(avlt->left,data);
	if (data < avlt->data) inAVLTree(avlt->right, data);
	int hL = heightOfAVLTreeNode(avlt->left,1);
	int hR = heightOfAVLTreeNode(avlt->right,1);
	int dif = hL - hR;
	switch (dif)
	{
	case 0:
	case 1:
	case -1:
		return;
		break;
	case 2:
		if (data < avlt->left->data)
		{
			singleLeftRotation(avlt);

		}
		else 
		{

		}
		break;
	case -2:
		if (data > avlt->right->data )
		{
			singleRightRotation(avlt);

		}
		else 
		{

		}
		break;
	}
	return;
}

void singleLeftRotation(AVLTreeNode* avltreenode)
{
	int tData = avltreenode->data;
	avltreenode->data = avltreenode->left->data;
	avltreenode->left->data = avltreenode->left->left->data;

	avltreenode->right = creatAVLTreeNode(tData);
	free(avltreenode->left->left);
}
void singleRightRotation(AVLTreeNode* avltreenode) 
{
	int tData = avltreenode->data;
	avltreenode->data = avltreenode->right->data;
	avltreenode->right->data = avltreenode->right->right->data;
	avltreenode->left = creatAVLTreeNode(tData);
	free(avltreenode->right->right);
}

int heightOfAVLTreeNode(AVLTreeNode* avltreenode, int height)
{
	if (avltreenode == NULL)
	{
		return avltreenode->height;
	}
	AVLTreeNode* avlt = avltreenode;
	height++;
	int hLeft = height;
	int hRight = height;
	hLeft = heightOfAVLTreeNode(avlt->left, hRight);
	hRight = heightOfAVLTreeNode(avlt->right, hRight);
	if (hRight >= hLeft)
	{
		return hRight;
	}
	else {
		return hLeft;
	}
}

AVLTree levelBuildAVLTree(int* dataArr, int length)
{
	AVLTree avlt = creatAVLTree();
	avlt.avltRoot = creatAVLTreeNode(dataArr[0]);
	AVLTreeNode* T;
	Queue tq = creatQueue();
	enQueue(&tq, (int)avlt.avltRoot);
	for (int i = 1;i < length;i++)
	{
		T = (AVLTreeNode*)deQueue(&tq);
		if (i < length)
		{
			T->left = creatAVLTreeNode(dataArr[i]);
			enQueue(&tq, (int)T->left);
			i++;
		}
		if (i < length)
		{
			T->right = creatAVLTreeNode(dataArr[i]);
			enQueue(&tq, (int)T->right);
		}
	}
	return avlt;
}

void cmptHeightOfAllAVLTreeNode(AVLTree* avlTree)
{
	AVLTreeNode* T = avlTree->avltRoot;

}
