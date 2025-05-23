//
// Created by luis on 21/05/25.
//

#ifndef BTREE_H
#define BTREE_H

typedef struct node *NodePtr;
struct node {
    int data;
    struct node *parent;
    struct node *left;
    struct node *right;
};

typedef struct bst *BstPtr;
struct bst {
    struct node *root;
};

BstPtr newBinarySearchTree(int data);
NodePtr newNode(int data);
void insert(BstPtr tree, int key);
void delete(BstPtr tree, int key);
int search(BstPtr tree, int key);
int min(BstPtr tree);
int max(BstPtr tree);
void inorder(BstPtr tree);
void preorder(BstPtr tree);
void postorder(BstPtr tree);
#endif //BTREE_H
