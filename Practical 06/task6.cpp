#include <iostream>
using namespace std;
 
int main()
{
   string a = "Hello";
   cout << &a<<endl;
   a[0] = 'J';
   cout << &a<<endl;
   cout << a<<endl;

 return 0;  
}
