#include <iostream>
using namespace std;
 
int main()
{
  string str1,str2 ;
  cout<<"enter a string ";
  getline(cin,str1);
  
  str2=str1;
  int i=0;
  for(auto it = str1.rbegin();it!=str1.rend();it++)
  {
    if(str2[i++] != *it )
     {
         cout<<"No it is not a Palindrome\n";
         return 0;
     }
  }
cout<<"Yes it is a palindrome\n";
return 0;
}

