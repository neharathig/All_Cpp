#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int *aptr = &a;

    cout<<aptr<<endl;

    aptr++;   //increses the address

    cout<<aptr<<endl;

    
 
    return 0;
}