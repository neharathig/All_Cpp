#include <bits/stdc++.h>
using namespace std;

//spf[i] - smallest prime factor of i 
void SievePrimeFactors(int n)
{
    
    int spf[n] = {0};
    
    for (int i = 2; i <= n ; i++)
    {
        spf[i] = i;
    }
    

    for (int i = 2; i <= n; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i*i; j <= n; j = j + i)
            {
                if (spf[j] == j)
                {
                    spf[j] = i;
                }
            }
        }
    }

    while(n!=1)
    {
        cout<<spf[n]<<" ";
        n = n/spf[n];
        //cout<<n<<" ";
    }
}

// Driver Program to test above function
int main()
{
    int n;
    cin >> n;
    cout << "Following are the prime factors of "
         << n << ": " << endl;
    SievePrimeFactors(n);

    return 0;
}