#include "binary_trees.h"
/**
 * binary_tree_size - calculates the size of the binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: return the size interms of size_t data type
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if(tree == NULL)
	{
		return (0);
	}

	size_t size = sizecal(tree) + 1;
	return (size);
}
/**
 * sizecal - calculate the size of the binary tree
 * @tree: pointer to the root node the tree to measure the size
 * Return: return the size interms of int type
 */
int sizecal(const binary_tree_t *tree)
{
	if(tree == NULL)
	{
		return (-1);
	}

	int sizel = 1, sizer = 1;
	sizel += sizecal(tree->left);
	sizer += sizecal(tree->right);
	return (sizel + sizer);

}
