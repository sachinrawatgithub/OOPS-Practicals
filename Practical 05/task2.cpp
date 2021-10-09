#include <iostream>
#include<stdbool.h>
using namespace std;

int main()
{

char ch='A';
bool a=true;
short b=2;
int c=3;
long d=100045;
float e=1.27;
double f=1.2745896;
long double g=10147852;
wchar_t h=L'B';

cout<<sizeof(char)<<endl<<sizeof(bool)<<endl<<sizeof(short)<<endl<<sizeof(int)<<endl<<sizeof(long)<<endl;
cout<<sizeof(float)<<endl<<sizeof(double)<<endl<<sizeof(long double)<<endl<<sizeof(char32_t)<<endl;

cout<<sizeof(ch)<<endl<<sizeof(a)<<endl<<sizeof(b)<<endl<<sizeof(c)<<endl<<sizeof(d)<<endl<<sizeof(e)<<endl;
cout<<sizeof(f)<<endl<<sizeof(g)<<endl<<sizeof(h)<<endl;


    return 0;
}

