#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int mx= INT_MIN;
    int n;
    cin>>n;

    int array[n];

    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }

    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            for(int k=i; k<=j; k++)
            {
                cout<<array[k]<<" ";
            }
            cout<<"\n";
        }
    }

return 0;

}

    