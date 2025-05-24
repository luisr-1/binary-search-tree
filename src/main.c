#include "bst.h"

int main(void) {
  BstPtr tree = newBinarySearchTree(10);
  insert(tree, 9);
  insert(tree, 11);
  insert(tree, 12);
  insert(tree, 1);
  return 0;
}
