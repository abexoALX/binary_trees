#include "binary_trees.h"

/**
 * binary_tree_size - calculates the size of the binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: If tree is NULL, your function must return 0, else return size.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t max = 0;

	if (tree)
	{
		max += 1;
		max += binary_tree_size(tree->left);
		max += binary_tree_size(tree->right);
	}

	return (max);
}
