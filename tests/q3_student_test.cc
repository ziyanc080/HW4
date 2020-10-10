#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Q3_Student, find_1) {
        
    std::vector<int> input = {4, 6, 2, 7, 1};

        BST s(input);
        
        bool actual = s.find(6);
        
        bool expect = true;
        
      EXPECT_EQ(actual, expect);

}

TEST(Q3_Student, find_2) {
        
    std::vector<int> input = {4, 6, 2, 7, 1};
        
        BST s(input);
        
        bool actual = s.find(5);
        
        bool expect = false;
        
      EXPECT_EQ(actual, expect);

}

TEST(Q3_Student, push_1) {
        
    std::vector<int> input = {4, 5, 6, 7};
        
        BST s(input);
        
        s.push(8);
    
        bool actual = s.find(8);
        
        bool expect = true;
        
      EXPECT_EQ(actual, expect);

}

TEST(Q3_Student, push_2) {
        
    std::vector<int> input = {4, 6, 2, 7, 1};
        
        BST s(input);
        
        s.push(8);
    
        bool actual = s.find(5);
        
        bool expect = false;
        
      EXPECT_EQ(actual, expect);

}

TEST(Q3_Student, erase_1) {
        
    std::vector<int> input = {2, 1, 3};
        
        BST s(input);

        bool actual = s.erase(1);
        
        bool expect = true;
        
      EXPECT_EQ(actual, expect);

}


TEST(Q3_Student, erase_2) {
        
    std::vector<int> input = {2, 1, 4};
        
        BST s(input);
    
        bool actual = s.erase(6);
        
        bool expect = false;
        
      EXPECT_EQ(actual, expect);

}


