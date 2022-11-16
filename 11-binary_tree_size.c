#include "binary_trees.h"

/**
 * binary_tree_size - calculates the size of the binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: If tree is NULL, your function must return 0, else return size.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t sizel = 0, sizer = 0;
		
		size_t max = 0;

		sizel = tree->left ? binary_tree_size(tree->left) + 1 : 0;
		sizer = tree->right ? binary_tree_size(tree->right) + 1 : 0;
		max = sizel + sizer;
		return (max);
	}

	return (0);
}
