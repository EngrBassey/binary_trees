#include "binary_trees.h"

/**
  * binary_tree_preorder - function that pre-oder tranverse binary tree
 * @tree: the binary tree
 * @func: func pointer
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
