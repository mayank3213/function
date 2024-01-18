#include<iostream>
using namespace std;
int main()
{
    int temp;
    int num;
    cout<<"enter a number: ";
    cin>>num;
    int rem,ans=0;
    temp=num;
    while(num!=0)
    {
        rem=num%10;   
        num=num/10;
        ans=ans*10+rem;
    }    
    if(temp==ans)
    {
        cout<<"palindrome";
    }
    else
    {
        cout<<"not palindrome";
    }

}
