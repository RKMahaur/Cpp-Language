//Write a C++ program to calculate the volume of a cuboid.

#include<iostream>
using namespace std;
int main()
{
    int l,b,h;
    cout<<"Enter length, breadth, height of a cuboid : ";
    cin>>l>>b>>h;
    cout<<"Volume of cuboid is "<<l*b*h;
    return 0;
}