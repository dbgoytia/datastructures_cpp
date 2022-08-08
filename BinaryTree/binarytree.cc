#include <iostream>

#include "binarytree.h"

using namespace std;

TreeNode * NewTreeNode(int val) {

    // Create a new node
    TreeNode * node = new TreeNode;

    // Assign a key
    node->val = val;

    // Initialize Left and Right pointer
    node->left = NULL;
    node->right = NULL;

    return node;
}

void Insert(int val) {
    cout << "Hello world!" << endl;
}


// int main() {
//     cout << "Binary Tree" << endl;

//     // Create root node
//     TreeNode * root = NewTreeNode(1);
//     cout << root->val << endl;

//     // Create left and right nodes
//     /*  
//             1
//           /   \
//          3     7
//     */

//     root->left = NewTreeNode(3);
//     root->right = NewTreeNode(7);

//     return 0;
// }