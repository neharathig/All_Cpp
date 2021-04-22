#include<iostream>
using namespace std;

int main()
{
    char arr[100] = "apple";
    int i=0;
    

    while(arr[i] != '\0')
    {
        cout<<arr[i];
        i++;
    }
    cout<<endl;

    char arr2[50];
    cin>>arr2;
    cout<<arr2<<endl;


    return 0;
}