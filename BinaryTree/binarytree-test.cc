#include <gtest/gtest.h>
#include <vector>

#include "binarytree.h"

using namespace std;

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
  vector<int> inOrderTravesal = root.printInOrder();
  vector<int> expected;
  expected.push_back(1);
  expected.push_back(4);
  EXPECT_EQ(inOrderTravesal, expected);
}

TEST(BinaryTreeTest, InsertsValuesInTreeInCorrectPosition)
{
  /** 
         5
      /     \
     3      12
    /  \    /  \
   1    4  6    20 
  */ 
  TreeNode root = TreeNode(5);
  root.insert(3);
  root.insert(12);
  root.insert(1);
  root.insert(4);
  root.insert(6);
  root.insert(20);
  vector<int> inOrderTraversal;
  inOrderTraversal = root.printInOrder();
  vector<int> expected;
  expected.push_back(1);
  expected.push_back(3);
  expected.push_back(4);
  expected.push_back(5);
  expected.push_back(6);
  expected.push_back(12);
  expected.push_back(20);
  EXPECT_EQ(inOrderTraversal, expected);
}

TEST(BinaryTreeTest, ReturnsArrayOfValuesInOrder)
{
  /** 
          6
        /   \ 
      4      8
    /  \
    3    5  
  */
  vector<int> expected;
  expected.push_back(3);
  expected.push_back(4);
  expected.push_back(5);
  expected.push_back(6);
  expected.push_back(8);
  TreeNode root = TreeNode(6);
  root.insert(4);
  root.insert(3);
  root.insert(5);
  root.insert(8);
  vector<int> res;
  res = root.printInOrder();
  EXPECT_EQ(res, expected);
}

TEST(BinaryTreeTest, ReturnsArrayOfValuesPostOrder)
{
  /** 
          6
        /   \ 
      4      8
    /  \
    3    5  
  */
  vector<int> expected;
  expected.push_back(3);
  expected.push_back(5);
  expected.push_back(4);
  expected.push_back(8);
  expected.push_back(6);
  TreeNode root = TreeNode(6);
  root.insert(4);
  root.insert(3);
  root.insert(5);
  root.insert(8);
  vector<int> res;
  res = root.printPostOrder();
  EXPECT_EQ(res, expected);
}


TEST(BinaryTreeTest, ReturnsArrayOfValuesPreOrder)
{
  /** 
          6
        /   \ 
      4      8
    /  \
   3    5  
  */
  vector<int> expected;
  expected.push_back(6);
  expected.push_back(4);
  expected.push_back(3);
  expected.push_back(5);
  expected.push_back(8);
  TreeNode root = TreeNode(6);
  root.insert(4);
  root.insert(3);
  root.insert(5);
  root.insert(8);
  vector<int> res;
  res = root.printPreOrder();
  EXPECT_EQ(res, expected);
}