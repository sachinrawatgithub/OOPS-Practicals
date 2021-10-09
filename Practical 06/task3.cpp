#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
 int ch;
 cout<<"1-> by reverse function \n2-> by reverse iterator\n";
 cout<<"enter your choice ";
 cin>>ch;
 string s1;
 cout<<"enter the string ";
 cin>>s1;
 int n = s1.size();
 
 
 switch(ch)
 {
  case 1:
     reverse(s1.begin(),s1.end());
     cout<<s1<<endl;
     
  break;
  
  case 2:
    for(auto it = s1.rbegin(); it != s1.rend(); ++it) 
      cout << *it;
      cout<<endl;
    break;
  
 }
    return 0;
}
