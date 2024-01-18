#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"enter a number: ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j>=(n+1)-i)
			{
			cout<<j<<" ";
		}
			else
			
			cout<<" ";
		}
		cout<<endl;
	}
}
