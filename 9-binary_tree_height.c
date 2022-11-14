#include"binary_trees.h"
/**
 * binary_tree_height - mesure the height of the binary tree
 * @tree : pointer to the root node of the tree to measure the height
 * Return: return the hieght of the binary tree size_t or else null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

	if( tree == NULL)
		return 0;
	size_t height = heightcalc(tree);
	return (height);


}
/**
 * heightcalc - calculate the height of a binary tree
 * @tree: pointer to the node of the tree to measure the height
 * Return: return the height of the binary tree interms of int data type
 */
int heightcalc(const binary_tree_t *tree)
{
	if(tree == NULL)
		return (-1);

	 int lh = heightcalc(tree->left);
	 int rh = heightcalc(tree->right);
	 return (lh > rh ? lh + 1 : rh + 1);
}
