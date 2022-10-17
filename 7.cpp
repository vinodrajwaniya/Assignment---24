#include<iostream>
using namespace std;

int add(int a, int b, int c=0)
{
    return a+b+c;
}

int main()
{
    int a,b,c;
    cout<<"Addition of two no is "<<add(4,5)<<endl;
    cout<<"Addition of three no is "<<add(4,5,3);
    return 0;
}