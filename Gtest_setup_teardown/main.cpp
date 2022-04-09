#include <iostream>
#include <map>
#include "gtest/gtest.h"

// 注释 pragma 可以允许用户在目标文件或可执行文件中插入注释。
// lib 指定符允许用户向链接器传递该注释，以在使用对象模块时指定其它的链接库。有些用户使用 lib 注释 pragma 以添加链接器选项和库名
#pragma comment(lib, "gtestd.lib")


using namespace std;

// define Student objective class
class Student 
{
    public:
    Student() {age = 0;}
    Student(int a)  {age = a;}
    void print() {cout << "*********** " << age << " **********" << endl;}
    int add(){ age = age+1; return age; }
    private:
    int age;
};

// define FooEnvironment
class FooEnvironment : public testing::Environment 
{ public:
  virtual void SetUp() { std::cout << "Foo FooEnvironment SetUP" << std::endl; }
  virtual void TearDown() { std::cout << "Foo FooEnvironment TearDown" << std::endl;}
};

static Student* s;

//在第一个test之前，最后一个test之后调用SetUpTestCase()和TearDownTestCase()
class TestMap :public testing::Test
{
public:
  static void SetUpTestCase()
  {
      cout << "SetUpTestCase()" << endl;
      s = new Student(23);
  }
  static void TearDownTestCase()
  {
      delete s;
      cout << "TearDownTestCase()" << endl;
  }
//   void SetUp() { cout << "SetUp() is running" << endl;}
  void SetUp() {   s->add(); }
  void TearDown() {cout << "TearDown()" << endl;}
};

TEST_F(TestMap, Test1)
{
  // you can refer to s here
  s->print();
}

TEST_F(TestMap, Test2)
{
  // you can refer to s here
  s->print();
}


int main(int argc, char** argv)
{
  // Initialize the FooEnvironement
  testing::AddGlobalTestEnvironment(new FooEnvironment);
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
