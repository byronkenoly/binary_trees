#include "binary_trees.h"
#include <stdlib.h>

/**
  * binary_tree_postorder - post-order traversal
  * 1. Traverse the left subtree
  * 2. Traverse the right subtree
  * 3. Visit the root
  *
  * @tree: pointer to root node of tree to traverse
  * @func: pointer to a function to call for each node
  */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);

	func(tree->n); /* Print current node */
}
