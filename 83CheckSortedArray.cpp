#include<iostream>
using namespace std;

//check array is sorted or not
bool sorted(int arr[], int n)
{
    if (n==1)
    {
        return true;
    }
    
    bool restArray = sorted(arr+1, n-1);
    return (arr[0] < arr[1]  && restArray);
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    cout<<sorted(arr,5)<<endl;
    return 0;
}