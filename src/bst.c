//
// Created by luis on 21/05/25.
//

#include "bst.h"

#include <stdlib.h>

BstPtr newBinarySearchTree(int key) {
    struct bst *tree = malloc(sizeof(struct bst));
    tree->root = malloc(sizeof(struct node));
    tree->root->left = NULL;
    tree->root->right = NULL;
    tree->root->parent = NULL;
    tree->root->data = key;
    return tree;
}

void insert(BstPtr tree, int key) {
    NodePtr current = tree->root;

    if(current->data < key) {
        while(current->right != NULL)
            current = current->right;

        if (current->right == NULL) {
            NodePtr node = malloc(sizeof(struct node));
            node->right = NULL;
            node->left = NULL;
            node->parent = current;
            node->data = key;
            current->right = node;
            return;
        }
    }
}
