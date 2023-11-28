#include "binary_trees.h"

/**
  * binary_tree_is_leaf - function that creare binary tree
 * @node: the binary tree
 * Return: return 1
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
