# cmake_learning
Learning cmake and googletest using VScode. 


Notes:
- Reference link: https://www.hahack.com/codes/cmake/ 
- Some remarks:
(1) Case_i related to the Demo in the reference link;
(2) For Case3: the MathFunctions.h file use "extern" keyword;
(3) For Case4:
    - Write config.h.in file to generate config file;
    - Include "config.h" in main.c
    - Modify main.cc to choose different library
    - Use ccmake . // c // enter // g // make to run 
(4)For Case5: (make install/test)
    - sudo make install
    - Copy .o file to /usr/locol/bin
    - Copy .h file to /usr/local/include
    - check: ls /usr/local/bin
    - note this copy path can be modified
(5)For Case6: 
    - similar to Case4 

Notes:
(1) Gtest_one_function:
    - test.cpp & a.out
    - include the gtest TEST functions and function define to test.cpp function 
    - refer to: https://blog.csdn.net/qq_26915769/article/details/107028696
    - using command line run: 
       g++ -std=c++11 test.cpp -lgtest -lpthread 
       ./a.out
    - gtest download in /usr/local/include
    - change the c_cpp_properties.json file to include this folder:
        "includePath": [
                "${workspaceFolder}/**",
                "/usr/local/include"
        ]
(2) simpletest:
    - using the CMakeLists to compile and link the gtest library 
    - include the gtest TEST functions and function define to main.cpp file
(3) Gtest_class:
    - test calc class with add function 
    - class defination using hpp file and using #program once to set include guard
    - note the complie way shown in calc_test.cpp
(4) Gtest_setup_teardown
    - g++ main.cpp -o test -std=c++11 -lpthread -lgtest
    - ./test
    - If we use setup and teardown funcion, we need to define a class form Environment
      Setup and Teardown for the environment run firstly for the whole file
      Every setup function in testsuite need obey the rule setting in Environment setting 
    - The teardown function is not necessary 
    - TEST_F(test_suite_name, test_case_name): one test_suite can have many test_case
    - Define TestMap from test class for SetupTestcase and Setup
      SetupTestcase for the suite TestMap 
      Setup for the testcase in TestMap

    
     




