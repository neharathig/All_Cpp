#include <iostream>
using namespace std;

bool pairsum(int array[], int n, int targetsum)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; i < n ; j++)
        {
            if (array[i]+array[j]==targetsum)
            {
                cout<<i<<" "<<j<<" "<<endl;
                return true;
            }            
        }      
    }
    
    return false;
}



int main()
{
    int n;
    cin >> n;
    int targetsum;
    cin>>targetsum;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    cout<<pairsum(array,n,targetsum)<<endl;

    return 0;
}