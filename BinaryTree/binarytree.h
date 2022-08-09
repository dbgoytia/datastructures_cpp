#ifndef TreeNode_H
#define TreeNode_H

class TreeNode
{
    
    public: 
        int val;
        TreeNode *left;
        TreeNode *right;

        TreeNode();
        TreeNode(int x);

        void insert(int val);

        std::vector<int> printInOrder();
        std::vector<int> printPostOrder();
        std::vector<int> printPreOrder();

};

void printInOrderHelper(TreeNode * root, std::vector<int> &inOrderTraversal);
void printPostOrderHelper(TreeNode * root, std::vector<int> &postOrderTraversal);
void printPreOrderHelper(TreeNode * root, std::vector<int> &postOrderTraversal);


#endif