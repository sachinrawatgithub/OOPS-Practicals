#include <iostream>
using namespace std;

class student 
{
  private:   
     string name,address,phoneno,head;
 
  public:
    void  setvalue()
    {
       cout<<"\nenter name ";
       getline(cin,name);
       
       cout<<"enter head of family ";
       cin>>head;
      
       cout<<"enter phone no ";
       cin>>phoneno;
    
       while(getchar() != '\n');
       cout<<"enter address ";
       getline(cin,address);
  
    }
  
   void getvalue()
   {
      cout<<"\n\nname "<<name;
      cout<<"\nhead of family "<<head;
      cout<<"\nphone no "<<phoneno;
      cout<<"\naddress "<<address;
    }
 
};

int main()
{
    student s[2];
    s[0].setvalue();
    s[1].setvalue();

    s[0].getvalue();
    s[1].getvalue();
    
    return 0;
}


