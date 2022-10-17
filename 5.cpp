#include<iostream>
using namespace std;
int fib(int );

int fib(int n)
{
    int i,no;
    if(n==0 || n==-1)
        return 1;
    no=fib(n-2)+fib(n-1);
    return no;
}

int main()
{
    int n,i,value,flag=0;
    cout<<"Enter an number ";
    cin>>n;
    for(i=0; ; i++)
    {
    value=fib(i);
    if(n==value)
        flag=1;


    if(fib(i)>=n)
        break;
     cout<<fib(i)<<" ";
    }
    if(flag==1)
    cout<<"Number is in Fabbonic series ";
    else
    cout<<"Not in fabbonic series ";
   
    return 0;
}