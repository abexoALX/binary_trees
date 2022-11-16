#include"binary_trees.h"

/**
 * max - calculates the maximum between the two nodes
 * @num1: the first number to be compared
 * @num2: the second number to be compared
 * Return: returns the largest between the two values
 */
size_t max(size_t num1, size_t num2)
{
	return (num1 >= num2 ? num1 : num2);

}
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

	return (max(l, r));
}
