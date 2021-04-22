#include <iostream>
#include <climits>
using namespace std;

int kadane(int array[], int n)
{
  int currentsum = 0;
    int maxsum = INT_MIN;
    int curlast;

    for (int i = 0; i < n; i++)
    {
        currentsum += array[i];

        if (currentsum < 0 || currentsum < curlast)
        {
            currentsum = 0;
        }
        curlast = currentsum;
        maxsum = max(currentsum, maxsum);
    }

    return maxsum;
}


int main()
{
    int mx = INT_MIN;
    int n;
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int wrapsum;
    int nonwrapsum;
    int totalsum = 0;

    nonwrapsum = kadane(array,n);

    for (int i = 0; i < n; i++)
    {
        totalsum += array[i];
        array[i] = -array[i];
    }
    
    wrapsum = totalsum + kadane(array,n);


    cout << max(wrapsum,nonwrapsum)<< endl;

    return 0;
}