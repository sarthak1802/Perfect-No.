#include <iostream>
using namespace std;

int main()
{
    int n,s=0;
	
	cout << "enter any number"<<endl;
	cin>>n;
	
	for (int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			s=s+i;
		}
	}
	if(n==s)
	{
		cout<<"number is perfect"<<endl;
	}
	else
	{
		cout<<"number is not perfect"<<endl;
	}
}