/* 
Using command line as follows:
g++ -std=c++11 test.cpp -lgtest -lpthread 
the output file is a.out 
*/
#include <gtest/gtest.h>
using namespace std; 

int add(int a, int b){
    return a+b;
}

TEST(testCase, test0){
    EXPECT_EQ(add(2,3),5);
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}