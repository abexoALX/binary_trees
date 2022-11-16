#include "binary_trees.h"

/**
 * binary_tree_depth - depth of the binary tree from the specified node
 * @tree: pointer to the node to measure the depth
 * Return: If tree is NULL, your function must return 0, else return depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t depth = 0;

		depth = tree->parent ? binary_tree_depth(tree->parent) + 1 : 0;
		return (depth);
	}
	return (0);
}
