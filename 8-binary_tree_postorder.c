#include"binary_trees.h"
/**
 *binary_tree_postorder - print tree postorder traversal
 *@tree is a pointer to the root node of the tree to traverse
 *@func is a pointer to a function to call for each node.
*/
 void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if(tree == NULL)
	{
		return;
	}
	

	if((tree != NULL) || (func != NULL))
	{
		 
		 binary_tree_postorder(tree->left, func);
		 binary_tree_postorder(tree->right, func);
		 func(tree->n);
	}
}