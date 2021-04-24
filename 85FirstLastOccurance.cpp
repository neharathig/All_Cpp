#include<iostream>
using namespace std;

int firstoccur(int arr[], int n, int i, int key)
{
    if (arr[i]==n)
    {
        return -1;
    }
    
    if (arr[i]==key)
    {
        return i;
    }
    
    return firstoccur(arr,n, i+1, key);
}


int lastoccur(int arr[],int n,int i,int key)
{
    if (i < 0)
    {
        return -1;
    }
    
    if (arr[i]==key)
    {
        return i;
    }
    
    return lastoccur(arr,n, i-1, key);

}

int main()
{
    int arr[] = {4,2,1,2,5,2,7};
    int i = 0;   //always start from 0
    cout<<firstoccur(arr,7,i,2)<<endl;
    i=7;  //len of arr
    cout<<lastoccur(arr,7,7,2)<<endl;
    return 0;
}