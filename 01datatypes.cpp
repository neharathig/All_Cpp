#include<iostream>
using namespace std;

int main()
{
    int a;
    a=10;

    cout<<"size of int "<<sizeof(a)<<endl;

    float b;
    b=3.14;
    cout<<"size of float "<<sizeof(b)<<endl;


    char c;
    c = '*';
    cout<<"size of char "<<sizeof(c)<<endl;


    bool d;
    cout<<"size of bool "<<sizeof(d)<<endl;
   
    short int si;
    long int li;
     cout<<"size of short int "<<sizeof(si)<<endl;

     cout<<"size of long int "<<sizeof(li)<<endl;

    return 0;
}