#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Q2_Student, NumberOfNodes_1) {
    
    
    TreeNode *root_ = new TreeNode(60, new TreeNode(20), new TreeNode(80));
    
    CPPLib s;
    
  // int actual = s.NumberOfNodes(new TreeNode(60, new TreeNode(20), new TreeNode(80)));
    
    int actual = s.NumberOfNodes(root_);
    
    int expect = 3;
    
    
  EXPECT_EQ(actual, expect);
}

TEST(Q2_Student, NumberOfNodes_2) {
    
    
    TreeNode *root_ =  new TreeNode(
        60,
        new TreeNode(20, new TreeNode(10),
                     new TreeNode(30, new TreeNode(25), new TreeNode(50))),
        new TreeNode(80));
    
    CPPLib s;
    
  // int actual = s.NumberOfNodes(new TreeNode(60, new TreeNode(20), new TreeNode(80)));
    
    int actual = s.NumberOfNodes(root_);
    
    int expect = 7;
    
    
  EXPECT_EQ(actual, expect);
}


TEST(Q2_Student, NumberOfNodes_3) {
    
    
    TreeNode *root_ =  new TreeNode(
        60,
        new TreeNode(20, new TreeNode(60, new TreeNode(20), new TreeNode(80)),
                     new TreeNode(30, new TreeNode(25), new TreeNode(50))),
        new TreeNode(80));
    
    CPPLib s;
    
  // int actual = s.NumberOfNodes(new TreeNode(60, new TreeNode(20), new TreeNode(80)));
    
    int actual = s.NumberOfNodes(root_);
    
    int expect = 9;
    
    
  EXPECT_EQ(actual, expect);
}



TEST(Q2_Student, SumOfNodes_1) {
    
    
    TreeNode *root_ = new TreeNode(60, new TreeNode(20), new TreeNode(80));
    
    CPPLib s;
    
  // int actual = s.NumberOfNodes(new TreeNode(60, new TreeNode(20), new TreeNode(80)));
    
    int actual = s.SumOfNodes(root_);
    
    int expect = 160;
    
    
  EXPECT_EQ(actual, expect);
}


TEST(Q2_Student, SumOfNodes_2) {
    
    
    TreeNode *root_ =  new TreeNode(
        60,
        new TreeNode(20, new TreeNode(10),
                     new TreeNode(30, new TreeNode(25), new TreeNode(50))),
        new TreeNode(80));
    
    CPPLib s;
    
  // int actual = s.NumberOfNodes(new TreeNode(60, new TreeNode(20), new TreeNode(80)));
    
    int actual = s.SumOfNodes(root_);
    
    int expect = 275;
    
    
  EXPECT_EQ(actual, expect);
}

TEST(Q2_Student, SumOfNodes_3) {
    
    
       TreeNode *root_ =  new TreeNode(
        60,
        new TreeNode(20, new TreeNode(60, new TreeNode(20), new TreeNode(80)),
                     new TreeNode(30, new TreeNode(25), new TreeNode(50))),
        new TreeNode(80));
    
    CPPLib s;
    
  // int actual = s.NumberOfNodes(new TreeNode(60, new TreeNode(20), new TreeNode(80)));
    
    int actual = s.SumOfNodes(root_);
    
    int expect = 425;
    
    
  EXPECT_EQ(actual, expect);
}

TEST(Q2_Student, DepthOfTree_1) {
    
    
    TreeNode *root_ = new TreeNode(60, new TreeNode(20), new TreeNode(80));
    
    CPPLib s;
    
  // int actual = s.NumberOfNodes(new TreeNode(60, new TreeNode(20), new TreeNode(80)));
    
    int actual = s.DepthOfTree(root_);
    
    int expect = 1;
    
    
  EXPECT_EQ(actual, expect);
}

TEST(Q2_Student, DepthOfTree_2) {
    
    
       TreeNode *root_ =  new TreeNode(
        60,
        new TreeNode(20, new TreeNode(10),
                     new TreeNode(30, new TreeNode(25), new TreeNode(50))),
        new TreeNode(80));
    
    CPPLib s;
    
  // int actual = s.NumberOfNodes(new TreeNode(60, new TreeNode(20), new TreeNode(80)));
    
    int actual = s.DepthOfTree(root_);
    
    int expect = 3;
    
    
  EXPECT_EQ(actual, expect);
}


TEST(Q2_Student, DepthOfTree_3) {
    
    
    TreeNode *root_ =  new TreeNode(
     60,
     new TreeNode(20, new TreeNode(60, new TreeNode(20), new TreeNode(80)),
                  new TreeNode(30, new TreeNode(25), new TreeNode(50))),
     new TreeNode(80));
    
    CPPLib s;
    
  // int actual = s.NumberOfNodes(new TreeNode(60, new TreeNode(20), new TreeNode(80)));
    
    int actual = s.DepthOfTree(root_);
    
    int expect = 3;
    
    
  EXPECT_EQ(actual, expect);
}

