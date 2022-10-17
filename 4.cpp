#include<iostream>
#include<stdio.h>
using namespace std;
int fact(int );
int comb(int, int);

int fact(int n)
{
    if(n<=0)
        return 1;
    int fact=1,i;
    for(int i=1; i<=n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int comb(int n, int r)
{
    int comb = fact(n) / (fact(r) * fact(n-r));
    return comb;
}

int main()
{
    int n;
    cout<<"Enter an number ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            int k=0;
            if(j==0)
            while (k++ <= (n/2 - i+1))
            
            printf(" ");

            printf("%d ",comb(i, j));
        }
    printf("\n");
    }
}