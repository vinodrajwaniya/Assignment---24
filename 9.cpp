#include<iostream>
using namespace std;

int max(int p, int q)
{
    return(p>q?p:q);
}

float max(float p, float q)
{
    return(p>q?p:q);
}

int main()
{
    int x,y;
    float a,b;
    cout<<"Maximum is "<<max(3, 6);
    cout<<"\nMaximum is "<<max(9.5, 7.5);
    return 0;
}