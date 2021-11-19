#include <iostream>
using namespace std;

class area
{
    private:
      int l,b,s;
    
    public:
      area(int x,int y)
      {
        l=x;
        b=y;
      }
      
      area(int x)
      {
        s=x;  
      }
     
     int area_of_rectangle(int x,int y)
     {
        l=x;
        b=y;
        return l*b; 
     }
     
     int area_of_square(int x)
     {
        s=x; 
        return s*s; 
     } 
      
};

int main()
{
 area a1(4,5);
 area a2(4);
   cout<<a1.area_of_rectangle(4,5)<<" "<<a2.area_of_square(4)<<endl;
   
}

