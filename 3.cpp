#include<iostream>
using namespace std;
int power(int, int);

int power(int x, int y)
{
    int n=1;
    while(y)
    {
        n=n*x;
        y--;
    }
    return n;
}

int main()
{
    int x,y;
    cout<<"Enter an number ";
    cin>>x;
    cout<<"Enter no's power ";
    cin>>y;
    cout<<"No. is "<<power(x, y);
    return 0;
}