#include<iostream>
using namespace std;

int main()
{
    int side1, side2, side3;

    cout<<"Enter 3 sides of a trianle"<<endl;

    cin>>side1>>side2>>side3;

    if(side1==side2 && side2==side3)
    {
        cout<<"Equilateral Triangle";
    }
    else if(side1==side2 || side2==side3 || side3==side1)
    {
        cout<<"Isosceles Triangle";
    }
    else
    {
        cout<<"Scelene Triangle";
    }

    return 0;
}