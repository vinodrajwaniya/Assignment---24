#include<iostream>
using namespace std;

int sum(int a, int b)
{
    return (a+b);
}
double sum(double p, double r)
{
    return (p+r);
}

int main()
{
    cout<<"Sum is "<<sum(4, 10);
    cout<<"\nSum is "<<sum(4.2, 6.9);
}