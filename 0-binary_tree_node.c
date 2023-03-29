#include <stdlib.h>
#include "binary_trees.h"

/**
  * binary_tree_node - pointer to binary_tree_t
  *
  * @parent: pointer to parent node
  * @value: value to put in the new node
  * Return: pointer to new node or NULL on failure
  */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node; /* declare pointer to binary tree node */

	new_node = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	/* malloc function used to allocate memory for a binary tree node */
	/* malloc function returns pointer to allocated memory, assigned */
	/* to `new_node` variable */

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
