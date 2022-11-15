#include"binary_trees.h"

/**
* binary_tree_insert_right - insert a node in the right side of the parent.
* @parent: A pointer to the parent of the node to create on the left..
* @value: The value to put in the new node.
* Return: If an error occurs or parent is NULL - NULL.
* Otherwise - a pointer to the new node.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	binary_tree_t *tmp;

	new_node = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		tmp = parent->right;
		parent->right = new_node;
		new_node->right = tmp;
		tmp->parent = new_node;
	}
	else
	{
		parent->right = new_node;

	}

	return (new_node);
}
