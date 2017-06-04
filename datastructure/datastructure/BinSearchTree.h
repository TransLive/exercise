#ifndef _BINSEARCHTREE_H_
#define _BINSEARCHTREE_H_

BinTree creatBinSearchTree(int data[], int length);
void addSearchTree(BinTree* bst, int data);
void delBinSearchTree(BinTree* bst, int data);//Delete ONE number data from BST
void delAllNumInBST(BinTree* bst, int data);
TreeNode* delOneInBST(TreeNode* treenode, int data);
TreeNode* findMinInBST(BinTree* bst);
TreeNode* findMinNodeInBST(TreeNode* bst);
TreeNode* findMaxInBST(BinTree* bst, int data);
int findInBST(BinTree* bst, int data);
#endif // !_BINSEARCHTREE_H_
