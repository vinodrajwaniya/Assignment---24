#include<iostream>
using namespace std;

float area(int r)
{
    return 3.14*r*r;
}

int area(int x, int y)
{
    return x*y;
}

float area(float b, float h)
{
    return 0.5*b*h;
}

int main()
{
    int x,y,r;
    float b,h;
    cout<<"Enter radius of circle ";
    cin>>r;

    cout<<"Enter length and breadth of rectangle ";
    cin>>x>>y;

    cout<<"Enter base and height of triangler ";
    cin>>b>>h;

    cout<<"\nArea of circle is "<<area(r);
    cout<<"\nArea of rectangle is "<<area(x, y);
    cout<<"\nArea of triangler is "<<area(b, h);
    return 0;

}