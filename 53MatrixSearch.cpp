// Given matrix is sorted matrix.

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int target;
    cin >> target;
    int array[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> array[i][j];
        }
    }

    // top right position
    int r = 0, c = m - 1;
    bool found = false;

    while (r < n && c >= 0)
    {
        if (array[r][c] == target)
        {
            found = true;
        }
        else if (array[r][c] < target)
        {
            r++;
        }
        else
        {
            c--;
        }
    }

    if (found)
    {
        cout << "Element Found" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}