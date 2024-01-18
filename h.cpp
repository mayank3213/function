#include<iostream>
using namespace std;
int main()
{
   int n,i,j;
   cout<<"enter a number: ";
   cin>>n;
   for(i=1;i<=n;i++)
   {
    for(j=1;j<=n+4;j++)
    {
        if(j>=n+1-i && j<=n-1+i)
        cout<<"*";
        else
        cout<<" ";
    }
    cout<<endl;
   }
}
