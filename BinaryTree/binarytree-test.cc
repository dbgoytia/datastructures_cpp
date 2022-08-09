#include <gtest/gtest.h>

#include "binarytree.h"

TEST(BinaryTreeTest, AssignsCorrectValueToNewBinaryTree)
{
  TreeNode root = TreeNode(1);
  EXPECT_EQ(root.val, 1);
}

TEST(BinaryTreeTest, InsertValueInTreeInCorrectPosition)
{
      // 1
      //   \
      //     4
  TreeNode root = TreeNode(1);
  root.insert(4);
  EXPECT_EQ(root.right->val, 4);
}

TEST(BinaryTreeTest, InsertsValuesInTreeInCorrectPosition)
{
  //        5
  //     /     \
  //    3      12
  //   /  \    /  \
  //  1    4  6    20 

  TreeNode root = TreeNode(5);
  root.insert(3);
  root.insert(12);
  root.insert(1);
  root.insert(4);
  root.insert(6);
  root.insert(20);
  EXPECT_EQ(root.right->right->val, 20);
}