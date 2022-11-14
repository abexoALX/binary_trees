#include "binary_trees.h"
/**
 * binary_tree_node - Delete a binary tree node.
 * @tree: tree is a pointer to the root node of the tree to delete.
 * The tree is null no operation will be done
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if(tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
	
}
