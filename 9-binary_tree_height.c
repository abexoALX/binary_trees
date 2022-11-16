#include"binary_trees.h"

/**
 * binary_tree_height - mesure the height of the binary tree
 * @tree : pointer to the root node of the tree to measure the height
 * Return: return the hieght of the binary tree size_t or else null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	size_t l = (tree->left) ? (1 + binary_tree_height(tree->left)) : 0;

	size_t r = (tree->right) ? (1 + binary_tree_height(tree->right)) : 0;

	return (l > r ? l : r);
}
