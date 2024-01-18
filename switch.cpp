#include<iostream>
using namespace std;
int main()
{
    int amount,h=0,f=0,t=0,d=0,a=1;
    cout<<"enter any amount: ";
    cin>>amount;
    570
    switch(a)
    {
        case 1: 
                            if(amount>=100) 
                            { h = amount/100;
                             amount=amount-100*h;}
                            

        case 2: 
                           if(amount>=50)  
                          { f = amount/50;
                             amount = amount-50*f;}
                            
        case 3:
                           if(amount>=20){
                           t=amount/20;
                           amount=amount-20*t;}
                           

                                               
        case 4:
                              if(amount>=10){
                              d=amount/10;}
                             

            
                                     

    }
      cout<<"Hundred's are: "<<h<<endl;
      cout<<" fifty's are: "<<f<<endl;
      cout<<" twenty's are: "<<t<<endl;
       cout<<"ten's are: "<<d<<endl;


    return 0;
}