#include "binary_trees.h"
#include <stdlib.h>

/**
  * binary_tree_nodes - counts nodes with at least 1 child
  *
  * @tree: pointer to the root node of the tree
  * Return: number of nodes with at least 1 child, 0 is tree is NULL
  */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		nodes = 1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
		return (nodes);
	}

	return (0);
}
