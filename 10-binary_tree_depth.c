#include"binary_trees.h"
/**
 * binary_tree_depth - caluculate the depth of the binary tree from the specified node
 * @tree: pointer to the node to measure the depth
 * Return: the depth in terms of size_t
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if(tree == NULL)
	{
		return (0);
	}

	size_t depth = depthcalc(tree);
	return (depth);
}
int depthcalc(const binary_tree_t *tree)
{
	if(tree == NULL )
	{
		return (-1);
	}

	int depth = depthcalc(tree->parent) + 1;
	return (depth);	
}
