#include "binary_trees.h"
#include <stdlib.h>

/**
  * binary_tree_preorder - pre-order traversal
  * 1. Visit the root
  * 2. Traverse the left subtree
  * 3. Traverse the right subtree
  *
  * @tree: pointer to root node of tree to traverse
  * @func: pointer to a function to call for each node
  */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n); /* Print current node */

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
