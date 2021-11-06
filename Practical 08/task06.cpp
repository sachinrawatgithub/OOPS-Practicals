#include <iostream>
#include<cmath>
using namespace std;

void factorial(int n)
{
  if(n==1)
  {
      cout<<2<<" ";
      return ;
  }
 
 factorial(n-1);     
 cout<<( n*(pow(n-1,n-1)+ n-1) ) <<" ";  
    
}

int main()
{
    int n;
    cout<<"enter a number ";
    cin>>n;
    
    factorial(n);
    
}

