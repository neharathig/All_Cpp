//Numbers divisible by both a and b.

#include<iostream>
using namespace std;

int divisible(int n,int a,int b)
{
    int c1=n/a;
    int c2=n/b;
    int c3 = n/(a*b);
    return c1+c2-c3;
}

int main()
{
    int n,a,b; 
    cin>>n>>a>>b;    // n is the limit while a n b are nums
 
    cout<<divisible(n,a,b)<<endl;
    return 0;
}