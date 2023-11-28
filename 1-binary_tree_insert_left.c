#include "binary_trees.h"

/**
  * binary_tree_insert_left - function that creare binary tree
  * @parent: link to another link
  * @value: elements in a link
  * Return: newnode to left
  */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{		binary_tree_t *new;

		if (parent == NULL)
			return (NULL);
		new = binary_tree_node(parent, value);

		if (parent->left != NULL)
		{
			new->left = parent->left;
			parent->left->parent = new;
		}
		parent->left = new;

		return (parent->left);
}
