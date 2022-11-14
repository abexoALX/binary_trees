#include "binary_trees.h"
/**
* binary_tree_node - Creates a binary tree node.
* @parent: A pointer to the parent of the node to create on the left..
* @value: The value to put in the new node.
* Return: If an error occurs or parent is NULL - NULL.
* Otherwise - a pointer to the new node.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	new_node = malloc(sizeof(binary_tree_t));

	if(new_node == NULL)
		return NULL;

	if(parent == NULL)
		return NULL;

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;

	if(parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;

	return (new_node);
}
