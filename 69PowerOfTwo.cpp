#include<iostream>
using namespace std;

bool ispowerof2(int n)
{
    // n & n-1 returns 0 for powerof2
    // n && is used for corner case 0

    return (n && !(n & n-1));
}


int main()
{
    int no;
    cin>>no;
    cout<<ispowerof2(no)<<endl;
    return 0;
}