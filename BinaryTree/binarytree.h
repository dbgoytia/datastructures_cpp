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

};

#endif