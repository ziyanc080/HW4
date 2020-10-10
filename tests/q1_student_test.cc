#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Q1_Student, keepOdd_1) {
    
    CPPLib s;
       
       std::vector<int> input = {2, 4, 6, 8, 9};

       std::vector<int> Actual = s.keepOdd(input);
       std::vector<int> Expect = {9};
       
     EXPECT_EQ(Expect, Actual);
    
}


TEST(Q1_Student, keepOdd_2) {
    
    CPPLib s;
       
       std::vector<int> input = {3, 5, 7};

       std::vector<int> Actual = s.keepOdd(input);
       std::vector<int> Expect = {3, 5, 7};
       
     EXPECT_EQ(Expect, Actual);
    
}


TEST(Q1_Student, keepOdd_3) {
    
    CPPLib s;
       
       std::vector<int> input = {0};

       std::vector<int> Actual = s.keepOdd(input);
       std::vector<int> Expect = {};
       
     EXPECT_EQ(Expect, Actual);
    
}


TEST(Q1_Student, transform_1) {
    
    CPPLib s;
       
       std::vector<int> input = {3, 4, 5, 6};

       std::vector<int> Actual = s.transform(input);
       std::vector<int> Expect = {4, 3, 6, 5};
       
     EXPECT_EQ(Expect, Actual);
    
}


TEST(Q1_Student, transform_2) {
    
    CPPLib s;
       
       std::vector<int> input = {2, 4, 6, 8};

       std::vector<int> Actual = s.transform(input);
       std::vector<int> Expect = {1, 3, 5, 7};
       
     EXPECT_EQ(Expect, Actual);
    
}



TEST(Q1_Student, transform_3) {
    
    CPPLib s;
       
       std::vector<int> input = {5, 5, 5};

       vector<int> Actual = s.transform(input);
       vector<int> Expect = {6, 6, 6};
       
     EXPECT_EQ(true, true);
    
}



TEST(Q1_Student, sum_1) {
    
    CPPLib s;
       
       std::vector<int> input = {1, 2, 3, 4};

       int Actual = s.sum(input);
       int Expect = 10;
       
     EXPECT_EQ(Expect, Actual);
    
}

TEST(Q1_Student, sum_2) {
    
    CPPLib s;
       
       std::vector<int> input = {1, 1, 5, 5};

       int Actual = s.sum(input);
       int Expect = 12;
       
     EXPECT_EQ(Expect, Actual);
    
}


TEST(Q1_Student, sum_3) {
    
    CPPLib s;
       
       std::vector<int> input = {};

       int Actual = s.sum(input);
       int Expect = 0;
       
     EXPECT_EQ(Expect, Actual);
    
}


