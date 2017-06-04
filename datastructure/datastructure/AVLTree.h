#ifndef _AVLTREE_H_
#define _AVLTREE_H_
typedef struct _AVLTreeNode
{
	int data;
	struct _AVLTreeNode* left;
	struct _AVLTreeNode* right;
	int height;
} AVLTreeNode;

typedef struct _AVLTree
{
	AVLTreeNode* avltRoot;
} AVLTree;

AVLTree creatAVLTree();
AVLTreeNode* creatAVLTreeNode(int data);
AVLTree levelBuildAVLTree(int* dataArr, int length);
void insertAVLTree(AVLTree* avlTree, int data);
	void inAVLTree(AVLTreeNode* avltreenode, int data);
int heightOfAVLTreeNode(AVLTreeNode* treenode, int height);
void cmptHeightOfAllAVLTreeNode(AVLTree* avltreenode);
void cmptHeightOfSingleAVLTreeNode(AVLTreeNode* avltreenode);
void singleLeftRotation(AVLTreeNode* treenode);
void singleRightRotation(AVLTreeNode* treenode);
#endif // !1