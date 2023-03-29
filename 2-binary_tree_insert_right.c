#include "binary_trees.h"
#include <stdlib.h>

/**
  * binary_tree_insert_right - inserts a node as left child
  *
  * @parent: pointer to node to insert right child
  * @value: value to store in new node
  * Return: pointer to new node or NULL on failure
  */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node; /* declare pointer to binary tree node */

	new_node = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	if (new_node == NULL || parent == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	parent->right = new_node;

	return (new_node);
}
