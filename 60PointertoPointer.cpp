#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p;
    p = &a;

    cout<<*p<<endl;

    int **q = &p;

    cout<<*q<<endl;
    cout<<**q<<endl;    //2 times dereferrence

    return 0;
}