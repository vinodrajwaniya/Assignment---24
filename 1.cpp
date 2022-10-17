#include<iostream>
using namespace std;
int prime(int );

int prime(int a)
{
    int i,flag=0;
    for(i=2;i<=a/2;i++)
    {
        if(a%i==0)
            flag=1;
    }
    return flag;
}


int main()
{
    int a;
    cout<<"Enter an number ";
    cin>>a;
    if(prime(a)==0)
        cout<<"Number is Prime ";
    else
        cout<<"Not prime";
    return 0;
}