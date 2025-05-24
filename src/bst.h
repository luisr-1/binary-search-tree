#ifndef BTREE_H
#define BTREE_H

typedef struct node *NodePtr;
struct node {
  int data;
  NodePtr parent;
  NodePtr left;
  NodePtr right;
};

typedef struct bst *BstPtr;
struct bst {
  NodePtr root;
};

BstPtr newBinarySearchTree(int data);
NodePtr newNode(int data);
void insertKey(BstPtr tree, int key);
void deleteKey(BstPtr tree, int key);
int searchKey(BstPtr tree, int key);
int minKey(BstPtr tree);
int maxKey(BstPtr tree);
void inorder(BstPtr tree);
void preorder(BstPtr tree);
void postorder(BstPtr tree);
#endif
