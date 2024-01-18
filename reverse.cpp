#include<iostream>
using namespace std;
int reverse(int num)
{
    int rem,ans=0;
    while(num!=0)
    {
        rem=num%10;   
        num=num/10;
        ans=ans*10+rem;
    }    
    return ans;
}
int main()
{
    int a;
    cout<<"enter a number: ";
    cin>>a;
    cout<<reverse(a);
}