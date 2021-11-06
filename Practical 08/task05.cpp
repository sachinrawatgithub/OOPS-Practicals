#include <iostream>
using namespace std;

int factorial(int n)
{
  if(n<=1)
    return n;
  
  return (factorial(n-1)*n);
  
    
}

int main()
{
    int n;
    cout<<"enter a number ";
    cin>>n;
    
    cout<<factorial(n);
    
}

