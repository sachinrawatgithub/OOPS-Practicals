#include<iostream>
using namespace std;
int main()
{
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	cout<<"BEFORE UPDATING"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			cout<<arr[i][j]<<" ";
		cout<<"\n";
	}
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		   arr[i][j]=10-arr[i][j];
		cout<<"\n";
	}
	cout<<"AFTER UPDATING"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			cout<<arr[i][j]<<" ";
		cout<<"\n";
	}
	
	return 0;
}
