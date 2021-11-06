#include <iostream>
using namespace std;

void swap(int *a,int *b)
{
   int temp=*a;
   *a=*b;
   *b=temp;
}

int main()
{
    int a,b;
    cout<<"enter two  number ";
    cin>>a>>b;
    
    swap(&a,&b);
    cout<<"value after swap function call ";
    cout<<a<<" "<<b;
    
}

