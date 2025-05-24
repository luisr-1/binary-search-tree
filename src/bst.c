#include "bst.h"
#include <stdlib.h>

BstPtr newBinarySearchTree(int key) {
  BstPtr tree = malloc(sizeof(struct bst));
  tree->root = newNode(key);
  return tree;
}

void insertKey(BstPtr tree, int key) {
  NodePtr current = tree->root;
  NodePtr node = newNode(key);

  if (current->data <= key) {
    while (current->right != NULL)
      current = current->right;

    node->parent = current;
    current->right = node;
    return;
  }

  while (current->left != NULL)
    current = current->left;

  node->parent = current;
  current->left = node;
}

NodePtr newNode(int data) {
  NodePtr newNode = malloc(sizeof(struct node));
  newNode->data = data;
  newNode->right = NULL;
  newNode->left = NULL;
  return newNode;
}
