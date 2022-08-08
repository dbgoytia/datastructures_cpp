#include <iostream>

#include "binarytree.h"

using namespace std;

TreeNode::TreeNode(int x)
{
    val = x;
    left = NULL;
    right = NULL;
}

void TreeNode::insert(int val)
{
    TreeNode * n = new TreeNode(val);
    this->left = n;
}