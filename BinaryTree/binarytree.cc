#include <iostream>

#include "binarytree.h"

/**
 * @brief Construct a new Tree Node:: Tree Node object
 * 
 * @param x integer to initialize the struct
 */
TreeNode::TreeNode(int x)
{
    val = x;
    left = NULL;
    right = NULL;
}

/**
 * @brief Inserts a new value in the Binary Tree
 *
 * @param val integer to insert in the binary tree
 * @return void
 */
void TreeNode::insert(int val)
{
    TreeNode * n = new TreeNode(val);
    
    std::cout << "Traversing" << std::endl;
    std::cout << this->val << std::endl;
    std::cout << "Inserting" << std::endl;
    std::cout << val << std::endl;

    if( this->val > val )
    {
        // Should insert left
        if( this->left == NULL)
        {
            std::cout << "Insert left" << std::endl;
            // If there's nothing insert left
            this->left = n;
        } else {
            std::cout << "Go left recursively" << std::endl;
            // If there's something on the left, recursively
            // go to left node and repeat.
            this->left->insert(val);
        }
        
    } else {
        // Should insert right
        if ( this->right == NULL )
        {
            std::cout << "Insert right" << std::endl;
            // If there's nothing insert right
            this->right = n;
        } else {
            std::cout << "Go right recursively" << std::endl;
            // If there's something on the right, recursively
            // go to right node and repeat.
            this->right->insert(val);
        }
    }
}