#include"binary_trees.h"
/**
 * binary_tree_is_leaf - check whther a node is aleaf or not
 * @node: a pointer to a node to check
 * Retrun: 1 if the node is a leaf node
 * Other wise return 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if(node == NULL)
	{
		return (0);
	}
	else
	{
		if((node->left == NULL) && (node->right == NULL))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}
