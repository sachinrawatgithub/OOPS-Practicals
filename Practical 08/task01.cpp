#include <iostream>
using namespace std;

//error because p can't point to more the one address

int main()
{

int *p = {10,20,20};
cout <<*p;

p++;
cout <<*p;
    
}
