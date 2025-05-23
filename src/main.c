#include <stdio.h>

#include "bst.h"

int main(void) {
    BstPtr tree = newBinarySearchTree(10);
    insert(tree, 20);
    insert(tree, 30);
    return 0;
}
