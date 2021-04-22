#include <iostream>
#include <climits>
using namespace std;

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

    cout << maxsum << endl;

    return 0;
}