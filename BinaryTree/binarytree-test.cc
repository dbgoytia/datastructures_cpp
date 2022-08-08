#include <gtest/gtest.h>

#include "binarytree.h"

TEST(BinaryTreeTest, AssignsCorrectValueToNewBinaryTree)
{
  TreeNode root = TreeNode(1);
  EXPECT_EQ(root.val, 1);
}

TEST(BinaryTreeTest, InsertsValueInTree)
{
  TreeNode root = TreeNode(1);
  root.insert(4);
  EXPECT_EQ(root.right->val, 4);
}