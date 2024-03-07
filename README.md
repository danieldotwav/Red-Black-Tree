## Overview

This C++ program provides a complete implementation of a Red-Black Tree, a self-balancing binary search tree. Each node in the tree is either red or black, and the tree maintains several properties through rotations and color changes after insertion and deletion operations, ensuring the tree remains balanced.

## Features

- **Insertion**: Adds a new element to the tree while maintaining the red-black properties.
- **Deletion**: Removes an element from the tree and rebalances it.
- **Traversal**: Supports inorder and preorder traversals to explore the tree structure.

## Components

- `RedBlackTree.cpp`: Contains the implementation of the Red-Black Tree, including rotation operations (`rotateLeft`, `rotateRight`), insertion, deletion, and the mechanisms to maintain the tree balanced.
- `RedBlackTree.h`: Header file with the declaration of the `RedBlackTree` class and its nodes. Defines the structure of a tree node and enumerates the node colors.
- `Source.cpp`: Demonstrates usage of the `RedBlackTree` class by inserting elements and performing inorder traversal.

## Usage

To use the Red-Black Tree implementation, include the `RedBlackTree.h` in your project and create instances of the `RedBlackTree` class. Use the `insert` and `delete` methods to modify the tree, and `inorder`/`preorder` to traverse and print the tree.
