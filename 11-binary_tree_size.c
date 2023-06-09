#include "binary_trees.h"
#include <stdlib.h>

/**
  * binary_tree_size - measures size of a binary tree
  * size - no. of elements present in the tree
  *
  * @tree: pointer to the root node of tree
  * Return: size of the tree, returns 0 if tree is NULL
  */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);

	size = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);
	return (size);
}
