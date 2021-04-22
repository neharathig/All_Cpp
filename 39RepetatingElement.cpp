#include<iostream>
#include<climits>
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

    const int N = 10000;
    int idx[N];
    for(int i=0; i<N; i++)
    {
        idx[i] = -1;
    }

    int mininx=INT_MAX;


    for (int i = 0; i < n; i++)
    {
        if (idx[a[i]] != -1)
        {
            //cout<<"if "<<idx[a[i]]<<endl;
            mininx=min(idx[a[i]],mininx);
        }
        else
        {
            idx[a[i]] = i;
            //cout<<idx[a[i]]<<" "<<a[i]<<" "<<i<<endl;
        }
        
    }
    
    if (mininx==INT_MAX)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<mininx+1<<endl;
    }
    

    return 0;
}    