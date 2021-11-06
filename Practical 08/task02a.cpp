#include <iostream>
using namespace std;

//error because arr is a constant pointer arr++ can't be possible

int main()
{

int arr[] = {10,20,30};
cout << *arr;
cout << arr;

arr++;
cout << *arr;
    
}
