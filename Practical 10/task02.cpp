#include <iostream>
using namespace std;

class student 
{
  private:   
    int rollno;
    string name,address;
 
  public:
void  setvalue()
 {
    cout<<"enter name ";
    cin>>name;
    
    cout<<"enter roll no ";
    cin>>rollno;
    
    while(getchar() != '\n');
    
    cout<<"enter address ";
    getline(cin,address);
  
 }
void getvalue()
 {
    cout<<"\nname "<<name;
    cout<<"\nenter roll no "<<rollno;
    cout<<"\nenter address "<<address;
    
 }
 
};

int main()
{
    student obj;
    student *ptr=&obj;
    
    ptr->setvalue();
    ptr->getvalue();
    
    return 0;
}


