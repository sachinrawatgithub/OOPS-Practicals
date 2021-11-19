#include<iostream>
using namespace std;

class abc
{

 private:
  static int count;

 public:
  void numberofcall()
  {
     count++;
  }  
  
  void print()
  {
    cout<<"count "<<count<<endl;
  }

};

int abc::count = 0;

int main()
{
  abc obj1,obj2,obj3,obj4;
  obj1.numberofcall();
  obj2.numberofcall();
  obj3.numberofcall();
  obj4.numberofcall();  
  
  obj1.print();
}
