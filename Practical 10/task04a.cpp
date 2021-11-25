#include <iostream>
using namespace std;
class sample
{
    private:
      int a;
    public:
      void setdata(int x)
      {
          a=x;
       }
   
    friend void operator<(sample n1,sample n2);
};

void operator<(sample n1,sample n2)
{
    if(n1.a < n2.a)
      cout<<"object 2 is greater";
    else
      cout<<"object 1 is greater";
}

int main()
{
    sample obj1,obj2;
    obj1.setdata(10);
    obj2.setdata(30);
    obj1 < obj2;
    return 0;
}

