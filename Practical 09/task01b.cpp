#include <iostream>
#include<iomanip>
using namespace std;

class student 
{
 
 int  age,year,marks;
 char section;
 string name;
 
  public:
 student()
 {
    cout<<"\nCONSTRUCTOR IS CALLED "<<endl; 
    name="----";
    age=0;
    year=0;
    section='!';
    marks=0;
 }
 
 void  setvalue()
 {
    while( getchar() != '\n' );
    cout<<"Enter Name ";
    getline(cin,name);
    
    cout<<"Enter Section ";
    cin>>section;
    
    cout<<"Enter Age ";
    cin>>age;
    
    cout<<"Enter Year ";
    cin>>year;
    
    cout<<"Enter Marks ";
    cin>>marks;
    
 }
void getvalue()
 {
    cout<<"\n"<<setw(10)<<name;
    cout<<setw(10)<<section;
    cout<<setw(10)<<age;
    cout<<setw(10)<<year;
    cout<<setw(10)<<marks;
    
 }
 
};

int main()
{
    int n;
    cout<<"ENTER THE NUMBER OF STUDENTS : ";
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++)
    {
      s[i].setvalue();
    }
    
    cout<<setw(10)<<"NMAE";
    cout<<setw(10)<<"SECTION";
    cout<<setw(10)<<"AGE";
    cout<<setw(10)<<"YEAR";
    cout<<setw(10)<<"MARKS";
    
    for(int i=0;i<n;i++)
    {
      s[i].getvalue();
    }

    return 0;
}


