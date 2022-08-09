#include <iostream>
#include <vector>
#include "binarytree.h"

using namespace std;

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
    if( this->val > val )
    {
        // Should insert left
        if( this->left == NULL)
        {
            // If there's nothing insert left
            this->left = n;
        } else {
            // If there's something on the left, recursively
            // go to left node and repeat.
            this->left->insert(val);
        }
        
    } else {
        // Should insert right
        if ( this->right == NULL )
        {
            // If there's nothing insert right
            this->right = n;
        } else {
            // If there's something on the right, recursively
            // go to right node and repeat.
            this->right->insert(val);
        }
    }
}

/**
 * @brief prints in order traversal
 * 
 * @return vector<int> containing in order traversal
 */
vector<int> TreeNode::printInOrder()
{
    vector<int> res;
    printInOrderHelper(this, res);
    return res;
}

void printInOrderHelper(TreeNode * root, vector<int> &inOrderTraversal)
{
    if (root == NULL)
        return;
    // Visit the left subtree
    printInOrderHelper(root->left, inOrderTraversal);
    // Visit the root
    inOrderTraversal.push_back(root->val);
    // Visit the right subtree
    printInOrderHelper(root->right, inOrderTraversal);
}

/**
 * @brief prints post order traversal
 * 
 * @return vector<int> containing post order traversal
 */
vector<int> TreeNode::printPostOrder()
{
    vector<int> res;
    printPostOrderHelper(this, res);
    return res;
}

void printPostOrderHelper(TreeNode * root, vector<int> &postOrderTraversal)
{
    if (root == NULL)
        return;
    // Visit left subtree
    printPostOrderHelper(root->left, postOrderTraversal);
    // Visit right subtree
    printPostOrderHelper(root->right, postOrderTraversal);
    // Visit the root
    postOrderTraversal.push_back(root->val);
}

/**
 * @brief prints pre order traversal
 * 
 * @return vector<int> containing pre order traversal
 */
vector<int> TreeNode::printPreOrder()
{
    vector<int> res;
    printPreOrderHelper(this, res);
    return res;
}

void printPreOrderHelper(TreeNode * root, std::vector<int> &postOrderTraversal)
{
    if (root == NULL)
        return;
    // Visit the root
    postOrderTraversal.push_back(root->val);
    // Visit the left subtree
    printPreOrderHelper(root->left, postOrderTraversal);
    // Visit the right subree
    printPreOrderHelper(root->right, postOrderTraversal);
}