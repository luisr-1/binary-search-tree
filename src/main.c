#include "bst.h"

int main(void) {
  BstPtr tree = newBinarySearchTree(10);
  insertKey(tree, 9);
  insertKey(tree, 11);
  insertKey(tree, 12);
  insertKey(tree, 1);
  inorder(tree->root);
  return 0;
}
