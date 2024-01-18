#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter first number: "<<endl;
    cin>>a;
    cout<<"enter second number: "<<endl;
    cin>>b;
    cout<<"enter third number: "<<endl;
    cin>>c;
    if(a>b || a>c)
    {
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}