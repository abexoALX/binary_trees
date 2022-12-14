#include "binary_trees.h"

/**
* binary_tree_insert_left - Creates a binary tree node to the left.
* @parent: A pointer to the parent of the node to create on the left..
* @value: The value to put in the new node.
* Return: If an error occurs or parent is NULL - NULL.
* Otherwise - a pointer to the new node.
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	binary_tree_t *tmp;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);

	if (parent->left)
	{
		tmp = parent->left;
		parent->left = new_node;
		tmp->parent = new_node;
		new_node->left = tmp;
	}
	else
	{
		parent->left = new_node;
	}
	return (new_node);
}
