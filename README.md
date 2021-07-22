# Project: Binary trees
This project is part of the Holberton School curriculum.

In this project you will find the files with solved cases to understand Binary tree, Data Structure and Algorithms - Tree, Tree Traversal, Binary Search Tree

## Objectives
* What is a binary tree
* What is the difference between a binary tree and a Binary Search Tree
* What is the possible gain in terms of time complexity compared to linked lists
* What are the depth, the height, the size of a binary tree
* What are the different traversal methods to go through a binary tree
* What is a complete, a full, a perfect, a balanced binary tree


## Requirements
* All files will be compiled on Ubuntu 14.04 LTS
* Programs and functions will be compiled with gcc 4.8.4 using the flags -Wall - Werror -Wextra and -pedantic
* All files should end with a new line
* The code should use the Betty style
* It is not allowed to use global variables
* No more than 5 functions per file
* It is allowed to use the standard library.
* The prototypes of all the functions should be included in the header file called binary_trees.h

## Data Structure and Functions
* For this project you use the following data structures and types for binary trees. Don’t forget to include them in your header file:

**Basic Binary Tree**
```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t
```

**Binary Search Tree**
```
typedef struct binary_tree_s bst_t;
```

**AVL Tree**
```
typedef struct binary_tree_s avl_t;
```

**Max Binary Heap**
```
typedef struct binary_tree_s heap_t;
```

**Print function**
To match the examples in the tasks, you are given this function https://github.com/holbertonschool/0x1C.c
This function is used only for visualization purposes.

## Compilation

Your code will be compiled this way:

gcc -Wall - Werror -Wextra and -pedantic [main file name].c [function file name].c -o [object file name]

## Execution

./[object file name]

## Examples

gcc -Wall - Werror -Wextra and -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node

./0-node

## File - Functions

* binary_tree.h - header file
* 0-binary_tree_node.c
* 1-binary_tree_insert_left.c
* 2-binary_tree_insert_right.c
* 3-binary_tree_delete.c
* 4-binary_tree_is_leaf.c
* 5-binary_tree_is_root.c
* 6-binary_tree_preorder.c
* 7-binary_tree_inorder.c
* 8-binary_tree_postorder.c
* 9-binary_tree_height.c
* 10-binary_tree_depth.c
* 11-binary_tree_size.c
* 12-binary_tree_leaves.c
* 13-binary_tree_nodes.c
* 14-binary_tree_balance.c
* 15-binary_tree_is_full.c
* 16-binary_tree_is_perfect.c
* 17-binary_tree_sibling.c
* 18-binary_tree_uncle.c

## Authors
* Melisa Rojas

