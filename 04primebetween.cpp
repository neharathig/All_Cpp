#include<iostream>
using namespace std;

int main()
{
    int a, b,i,j;

    cout<<"Enter range ";

    cin>>a>>b;

    for(i=a; i <b; i++ )
    {
        for(j=2; j < i; j++ )
        {
            if(i % j == 0)
            {
                
                break;
            }
        }
        if (i==j)
        {
            cout<<j<<endl;
        }
    }


    return 0;
}