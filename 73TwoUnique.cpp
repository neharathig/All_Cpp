#include<iostream>
using namespace std;

int setBit(int n, int pos)
{
    return((n & (1<<pos))!=0);
}


void Twounique(int arr[],int n)
{
    int xorsum=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        xorsum = xorsum ^ arr[i];
    }
    int tempxor = xorsum;
    int setbit=0, pos=0;
    while (setbit != 1)
    {
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }
    
    int newxor=0;
    for (int i = 0; i < n; i++)
    {
        if(setBit(arr[i],pos-1))
        {
            newxor = newxor ^ arr[i];
        }
        
    }

    cout<<newxor<<" "<<(tempxor^newxor)<<endl;
    

}

int main()
{
    int arr[9] = {1,2,3,16,21,3,2,1};
    Twounique(arr,9);
    return 0;
}