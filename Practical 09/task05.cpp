/*
STRUCTURE => A structure is a grouping of variables of various data types referenced by the same name.
             If no access specifier is specified, all members are set to 'public'.
             Structure instance is called the 'structure variable'.
             It does not support inheritance.
             Memory is allocated on the stack.
CLASS =>    In C++, a class is defined as a collection of related variables and functions 
            contained within a single structure.
            If no access specifier is defined, all members are set to 'private'.
            A class instance is called 'object'.
            It supports inheritance.
*/

#include <iostream>
using namespace std;

struct student
    {
      int age,roll;
    };

class college
{
  private:
     struct student a;
  public:    
     void seta(int age,int roll)
    {
        a.age=age;
        a.roll=roll;
    }
    void print()
    {
        cout<<"age = "<<a.age<<" roll = "<<a.roll<<endl;
    }
};


int main()
{
    college obj;
    obj.seta(5,10);
    obj.print();
    
    return 0;
}

