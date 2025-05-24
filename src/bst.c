#include "bst.h"
#include <stdio.h>
#include <stdlib.h>

BstPtr newBinarySearchTree(int key) {
  BstPtr tree = malloc(sizeof(struct bst));
  tree->root = newNode(key);
  return tree;
}

void insertKey(BstPtr tree, int key) {
  NodePtr current = tree->root;
  NodePtr node = newNode(key);

  if (current->key <= key) {
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

NodePtr newNode(int key) {
  NodePtr newNode = malloc(sizeof(struct node));
  newNode->key = key;
  newNode->right = NULL;
  newNode->left = NULL;
  return newNode;
}

void inorder(NodePtr node) {
  if (node != NULL) {
    inorder(node->left);
    printf("%d ", node->key);
    inorder(node->right);
  }
}

NodePtr searchKey(NodePtr root, int key) {
  if (root == NULL || root->key == key)
    return root;

  if (key < root->key)
    return searchKey(root->left, key);

  return searchKey(root->right, key);
}

NodePtr maxKey(NodePtr root) {
  if (root == NULL)
    return NULL;

  NodePtr current = root;
  while (current->right != NULL)
    current = current->right;

  return current;
}

NodePtr minKey(NodePtr root) {
  if (root == NULL)
    return NULL;

  NodePtr current = root;
  while (current->left != NULL)
    current = current->left;

  return current;
}

void transplantNode(BstPtr tree, NodePtr subs, NodePtr subx) {
  if (subs->parent == NULL)
    tree->root = subx;
  else if (subs == subs->parent->left)
    subs->parent->left = subx;
  else
    subs->parent->right = subx;
  if (subx != NULL)
    subx->parent = subs->parent;
}

void deleteKey(BstPtr tree, int key) {
  NodePtr node = searchKey(tree->root, key);

  if (node == NULL)
    return;

  if (node->left == NULL)
    transplantNode(tree, node, node->right);
  else if (node->right == NULL)
    transplantNode(tree, node, node->left);
  else {
    NodePtr substitute = minKey(node->right);

    if (substitute->parent != node) {
      transplantNode(tree, substitute, substitute->right);
      substitute->right = node->right;
      substitute->right->parent = substitute;
    }

    transplantNode(tree, node, substitute);
    substitute->left = node->left;
    substitute->left->parent = substitute;
  }
}
