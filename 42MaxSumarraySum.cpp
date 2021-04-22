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

    int maxsum = INT_MIN;

    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            int sum = 0;
            for(int k=i; k<=j; k++)
            {
                sum = sum + array[k];
            }
            maxsum = max(maxsum,sum);
        }
    }

    cout<<maxsum<<endl;

return 0;

}

    