#include "binary_trees.h"

/**
 * binary_tree_leaves - calucalte the leaves of anode
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: If tree is NULL, your function must return 0, else 2 or 1.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	size_t leaves = 0;

	if (tree->left != NULL)
	{
		leaves++;
	}

	if (tree->right != NULL)
	{
		leaves++;
	}
	return (leaves);


}
