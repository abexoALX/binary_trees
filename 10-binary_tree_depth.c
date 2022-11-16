#include "binary_trees.h"

/**
 * binary_tree_depth - depth of the binary tree from the specified node
 * @tree: pointer to the node to measure the depth
 * Return: NULL if tree is null else the depth in terms of size_t
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	size_t depth = 0;

	depth = depthcalc(tree);
	return (depth);
}
/**
 * depthcalc - calculate the depth of the binary tree
 * @tree: pointer to the node to measure the depth
 * Return: NULL if tree is null else the depth in int data type
 */
int depthcalc(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (-1);
	}
	int depth = 0;

	depth = depthcalc(tree->parent) + 1;
	return (depth);
}
