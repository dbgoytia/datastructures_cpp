#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

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

int main() {
    cout << "Binary Tree" << endl;

    // Create root node
    TreeNode * root = NewTreeNode(1);
    cout << root->val << endl;

    // Create left and right nodes
    /*  
            1
          /   \
         3     7
    */

    root->left = NewTreeNode(3);
    root->right = NewTreeNode(7);

    return 0;
}