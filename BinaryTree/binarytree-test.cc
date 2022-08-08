#include <gtest/gtest.h>

#include "binarytree.h"

TEST(BinaryTreeTest, AssignsCorrectValueToNewBinaryTree) {
  TreeNode * root = NewTreeNode(1);
  EXPECT_EQ(root->val, 1);
}
