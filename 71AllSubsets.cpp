#include<iostream>
using namespace std;

// To count all subsets of set
void subsets(int arr[], int n)
{
    for (int i = 0; i < (1<<n); i++)    //1<<n acts as 2^n
    {
        for (int j = 0; j < n; j++)
        {
            /* code */
            if (i & (1<<j))
            {
                cout<<arr[j]<<" ";
            }
            
        }
        cout<<endl;
    }
    
}


int main()
{
    int arr[4] = {1,2,3,4};
    subsets(arr,4);
    return 0;
}