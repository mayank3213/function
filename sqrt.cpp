#include<iostream>
using namespace std;
int main()
{
    int n,ans;
    cout<<"enter a number: ";
    cin>>n;
    int i=1;
    while(n>i*i)
    {
       ans=i*i;
       i++;
    }
    cout<<i-1;
}
