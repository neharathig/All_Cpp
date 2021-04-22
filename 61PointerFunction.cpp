#include<iostream>
using namespace std;

void increment(int *a)
{
    *a = *a + 2;
}


int main()
{
    int a=2;
    increment(&a);   
    cout<<a<<endl;  //4 
    return 0;
}