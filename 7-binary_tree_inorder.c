#include "binary_trees.h"
#include <stdlib.h>

/**
  * binary_tree_inorder - in-order traversal
  * 1. Traverse the left subtree
  * 2. Visit the root
  * 3. Traverse the right subtree
  *
  * @tree: pointer to root node of tree to traverse
  * @func: pointer to a function to call for each node
  */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);

	func(tree->n); /* Print current node */

	binary_tree_inorder(tree->right, func);
}
