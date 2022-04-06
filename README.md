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
(2)
    
     




