#include <iostream>
#include<ctime>
using namespace std;

int main()
{
   time_t now = time(0);
   tm *ltm = localtime(&now);
   
   int x;
   cin>>x;
   
 switch(x)
 {
    case 1: 
       cout << "Year:" << 1900 + ltm->tm_year<<endl;
    break; 
    
    case 2:
       cout << "Month: "<< 1 + ltm->tm_mon<< endl;
    break;

    case 3:
       cout << "Day: "<< ltm->tm_mday << endl;
    break;
    
    default :
       cout<<"not applicable";
    break;   

 }
    
}

