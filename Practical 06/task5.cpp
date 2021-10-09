#include <iostream>
using namespace std;

int main()
{
  string s1,s2;
  int i=1;
  while(i++<=5)
  {
      cout<<"\nenter the first string ";
      cin>>s1;
      
      cout<<"\nenter the second string ";
      cin>>s2;
      
      int a = s1.compare(s2);
      cout<<a<<endl;
  }

return 0;
}
