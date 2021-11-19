#include <iostream>
using namespace std;

class student 
{
 int rollno;
 string name,address,phoneno;
  public:
void  setvalue()
 {
    cout<<"enter name ";
    cin>>name;
    cout<<"enter roll no ";
    cin>>rollno;
    cout<<"enter phone no ";
    cin>>phoneno;
    
    while(getchar() != '\n');
    
    cout<<"enter address ";
    getline(cin,address);
  
 }
void getvalue()
 {
    cout<<"\nname "<<name;
    cout<<"\nenter roll no "<<rollno;
    cout<<"\nenter phone no "<<phoneno;
    cout<<"\nenter address "<<address;
    
 }
 
};

int main()
{
    student s1,s2;
    s1.setvalue();
    s2.setvalue();
    s1.getvalue();
    s2.getvalue();
    
    return 0;
}


