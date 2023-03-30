#include "binary_trees.h"
#include <stdlib.h>

/**
  * binary_tree_height - measures height of a binary tree
  *
  * @tree: pointer to the root node of the tree to measure
  * Return: height of binary tree
  */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight = 0, rightHeight = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		leftHeight = 1 + binary_tree_height(tree->left);
	else
		leftHeight = 0;

	if (tree->right)
		rightHeight = 1 + binary_tree_height(tree->right);
	else
		rightHeight = 0;

	if (leftHeight > rightHeight)
		return (leftHeight);
	else
		return (rightHeight);
}
