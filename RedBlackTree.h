/*
Red Black Trees - Rules

- Every node is red or black.
- Root is always black.
- New insertions are always red (if it's the root, we immediately turn it black).
- Every path from root-leaf has the same number of BLACK nodes.
- No path can have two consecutive RED nodes.
- Nulls are black.

Rebalance - 2 Ways

Black Aunt Rotate
Red Aunt Colorflip

ROTATION:

		BLACK
		/   \
	  RED   RED

COLORFLIP

		  RED
		 /   \
	  BLACK  BLACK

*/

#ifndef REDBLACKTREE_H
#define REDBLACKTREE_H

enum Color { RED, BLACK };

class RedBlackTree {
private:
	struct RedBlackNode {
		int data;
		bool color;
		RedBlackNode* left;
		RedBlackNode* right;
		RedBlackNode* parent;

		RedBlackNode(int data) : data(data), color(RED), left(nullptr), right(nullptr), parent(nullptr) {}
	};

	RedBlackNode* root;

	void rotateLeft(RedBlackNode*& node);
	void rotateRight(RedBlackNode*& node);
	void fixInsertRBT(RedBlackNode*& node);
	void fixDeleteRBT(RedBlackNode*& node);
	RedBlackNode* insertBST(RedBlackNode*& rootNode, RedBlackNode*& insertNode);
	RedBlackNode* deleteBST(RedBlackNode*& insertNode, int data);

public:
	RedBlackTree() : root(nullptr) {}
	
	void insert(const int& val);
	void deleteByVal(int val);
	void inorder();
	void preorder();
};



#endif