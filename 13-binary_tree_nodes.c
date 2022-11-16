#include "binary_trees.h"

/**
 * binary_tree_nodes - Measures a node with at list of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size of.
 * Return: The size of the tree.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t total = 0;

	if (tree)
	{
		total += (tree->left) || (tree->right) ? 1 : 0;
		total += binary_tree_nodes(tree->left);
		total += binary_tree_nodes(tree->right);

	}
	return (total);

}
