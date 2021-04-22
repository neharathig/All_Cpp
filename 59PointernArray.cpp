#include<iostream>
#include<array>
using namespace std;


int main()
{
    int arr[]={10,20,30};
    cout<<*arr<<endl;           //prints first element of array  

    int *ptr = arr;

    for (int i = 0; i < 3 ; i++)
    {
        cout<<*ptr<<endl;
        ptr++;    

    }
    


    for (int i = 0; i < 3; i++)
    {
        cout<<*(arr+i)<<endl;
    }
    


    return 0;
}