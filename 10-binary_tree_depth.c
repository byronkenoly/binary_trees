#include "binary_trees.h"
#include <stdlib.h>

/**
  * binary_tree_depth - measures depth of node in binary tree
  * depth - no. of edges present from root node to that node
  *
  * @tree: pointer to the node to measure the depth
  * Return: depth of node or 0 when tree is NULL
  */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree && tree->parent)
		return (1 + binary_tree_depth(tree->parent));
	else
		return (0);
}
