#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int ans = 2;
    int pd = a[1]-a[0];
    int j=2;
    int curlength=2;        //current length of longest arithematic subarray

    while(j<n)
    {
        if(pd == a[j]-a[j-1])
        {
            curlength++;
        }
        else
        {
            pd = a[j]-a[j-1];
            curlength = 2;
        }

        ans= max(curlength,ans);
    j++;
    
    }

    cout<<ans<<endl;

    return 0;

}    