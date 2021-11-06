#include <iostream>
using namespace std;

void factorial(int n)
{
    int ans=1;
    for(int i=n;i>0;i--)
     ans=ans*i;
     
     cout<<ans;
    
}

int main()
{
    int n;
    cout<<"enter a number ";
    cin>>n;
    factorial(n);
    
}

