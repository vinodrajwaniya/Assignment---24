#include<iostream>
using namespace std;

int highest(int );

int highest(int n)
{
    int k,m=0;
    while (n!=0)
    {    
        k=n%10;
        if(k>=m)
            m=k;
        n=n/10;
    }
    return m;
}

int main()
{
    int n,k=0,m=0;
    cout<<"Enter an number ";
    cin>>n;
    cout<<"Highest Number is "<<highest(n);
}