#include<iostream>
using namespace std;

int onlyunique(int arr[],int n)
{
    int xorsum=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        xorsum = xorsum ^ arr[i];
    }
    return xorsum;
}

int main()
{
    int arr[9] = {1,2,3,4,5,4,3,2,1};
    cout<<onlyunique(arr,9)<<endl;
    return 0;
}