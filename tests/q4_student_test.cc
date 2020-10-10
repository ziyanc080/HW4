#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Q4_Student, TEST1) {
      
      TreeNode *root_ =  new TreeNode(
          60,
          new TreeNode(20, new TreeNode(10),
                       new TreeNode(30, new TreeNode(25), new TreeNode(50))),
          new TreeNode(80));
      
      CPPLib s;
      
    // int actual = s.NumberOfNodes(new TreeNode(60, new TreeNode(20), new TreeNode(80)));
      
      bool actual = s.isBST(root_);
      
      bool expect = true;
      
      
    EXPECT_EQ(actual, expect);

}

TEST(Q4_Student, TEST2) {
      
      TreeNode *root_ =  new TreeNode(
          60,
          new TreeNode(20, new TreeNode(10),
                       new TreeNode(30, new TreeNode(25), new TreeNode(50))),
          new TreeNode(40));
      
      CPPLib s;
      
    // int actual = s.NumberOfNodes(new TreeNode(60, new TreeNode(20), new TreeNode(80)));
      
      bool actual = s.isBST(root_);
      
      bool expect = false;
      
      
    EXPECT_EQ(actual, expect);

}


TEST(Q4_Student, TEST3) {
      
      TreeNode *root_ =  new TreeNode(
          60,
          new TreeNode(20, new TreeNode(25),
                       new TreeNode(30, new TreeNode(25), new TreeNode(50))),
          new TreeNode(80));
      
      CPPLib s;
      
    // int actual = s.NumberOfNodes(new TreeNode(60, new TreeNode(20), new TreeNode(80)));
      
      bool actual = s.isBST(root_);
      
      bool expect = false;
      
      
    EXPECT_EQ(actual, expect);

}


TEST(Q4_Student, TEST4) {
      
      TreeNode *root_ =  new TreeNode(
          60,
          new TreeNode(20, new TreeNode(10),
                       new TreeNode(30, new TreeNode(31), new TreeNode(50))),
          new TreeNode(80));
      
      CPPLib s;
      
    // int actual = s.NumberOfNodes(new TreeNode(60, new TreeNode(20), new TreeNode(80)));
      
      bool actual = s.isBST(root_);
      
      bool expect = false;
      
      
    EXPECT_EQ(actual, expect);

}
