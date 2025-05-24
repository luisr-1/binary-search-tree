#ifndef BTREE_H
#define BTREE_H

typedef struct node *NodePtr;
struct node {
  int key;
  NodePtr parent;
  NodePtr left;
  NodePtr right;
};

typedef struct bst *BstPtr;
struct bst {
  NodePtr root;
};

BstPtr newBinarySearchTree(int key);
NodePtr newNode(int key);
void insertKey(BstPtr tree, int key);
void deleteKey(BstPtr tree, int key);
NodePtr searchKey(NodePtr root, int key);
NodePtr minKey(NodePtr root);
NodePtr maxKey(NodePtr root);
void inorder(NodePtr node);
void preorder(NodePtr node);
void postorder(NodePtr node);
#endif
