#include "RedBlackTree.h"

void RedBlackTree::rotateLeft(RedBlackNode*& node) {
    RedBlackNode* node_right = node->right;
    node->right = node_right->left;
    if (node_right->left != nullptr) {
        node_right->left->parent = node;
    }
    node_right->parent = node->parent;
    if (node->parent == nullptr) {
        this->root = node_right;
    }
    else if (node == node->parent->left) {
        node->parent->left = node_right;
    }
    else {
        node->parent->right = node_right;
    }
    node_right->left = node;
    node->parent = node_right;
}

void RedBlackTree::rotateRight(RedBlackNode*& node) {
    RedBlackNode* node_left = node->left;
    node->left = node_left->right;
    if (node_left->right != nullptr) {
        node_left->right->parent = node;
    }
    node_left->parent = node->parent;
    if (node->parent == nullptr) {
        this->root = node_left;
    }
    else if (node == node->parent->right) {
        node->parent->right = node_left;
    }
    else {
        node->parent->left = node_left;
    }
    node_left->right = node;
    node->parent = node_left;
}
