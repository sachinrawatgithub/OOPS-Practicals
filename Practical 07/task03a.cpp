#include <iostream>
#include<algorithm>
using namespace std;

int main()
{

int a[3][3],i,j;
for( j=0;j<3;j++)
{
  for( i=0;i<3;i++)
    {
         cin>>a[j][i];
    }
 reverse(a[j],a[j]+3);   
}
 
 
 
for(j=2;j>=0;j--)
{
  for(i=0;i<3;i++)
    {
       cout<<a[j][i];    
    }
  cout<<endl;  
}  
 
}
