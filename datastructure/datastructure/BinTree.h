#ifndef _BINTREE_H_
#define _BINTREE_H_
#include "Queue.h"

typedef struct _TreeNode
{
	int data;
	struct _TreeNode* left;
	struct _TreeNode* right;
} TreeNode;	
typedef struct _BinTree
{
  TreeNode* btRoot;
} BinTree;

TreeNode* creatTreeNode(int data);
BinTree creatTree();


int heightOfTree(BinTree* bintree);
int hofTree(TreeNode* treenode, int height);
int isEmptyTree(BinTree* bintree);
void emptyTreeInfo();
BinTree levelBuildBinTree(int* data, int length);
BinTree preBuildBinTree(int* data, int length);
BinTree preBuildBinTree(int* dataArr, int length);
void preBBT(TreeNode* bintree, int* dataArr, int length, int counter);

void preTraversalTree(BinTree* bintree);
void preTT(TreeNode* treenode);
void inTraversalTree(BinTree* bintree);
void inTT(TreeNode* treenode);
void postTraversalTree(BinTree* bintree);
void postTT(TreeNode* treenode);
void levelTraversalTree(BinTree* bintree);

void addSearchTree(BinTree* bintree, int data);
void searchSeachTree(BinTree* bintree, int data);
void delSearchTreeNode(BinTree* bintree, int data);
#endif