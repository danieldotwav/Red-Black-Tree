#include <iostream>
#include "RedBlackTree.h"

using namespace std;

int main() {
	RedBlackTree tree;
	tree.insert(10);
	tree.insert(20);
	tree.insert(30);
	tree.insert(40);

	tree.inorder();

	return 0;
}