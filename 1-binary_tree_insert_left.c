#include "binary_trees.h"
#include <stdlib.h>

/**
  * binary_tree_insert_left - inserts a node as left child
  *
  * @parent: pointer to node to insert left child
  * @value: value to store in new node
  * Return: pointer to new node or NULL on failure
  */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node; /* declare pointer to binary tree node */

	new_node = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}

	if (parent != NULL)
		parent->left = new_node;

	return (new_node);
}
