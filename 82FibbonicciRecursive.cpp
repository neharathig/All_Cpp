#include<iostream>
using namespace std;

int Fibb(int n)
{
    if (n==0 || n==1)
    {
        return n;
    }
    
    return Fibb(n-1)+Fibb(n-2);
}

int main()
{
    int n;
    cin>>n;
    cout<<Fibb(n)<<endl;
    return 0;
}