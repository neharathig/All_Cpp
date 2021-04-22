#include<iostream>
using namespace std;

int Rsum(int n)
{
    if (n==0)
    {
        return 0;
    }
    
    int prevsum  = Rsum(n-1);
    return n + prevsum;
}

int main()
{
    int n;
    cin>>n;

    cout<<Rsum(n)<<endl;
    return 0;
}