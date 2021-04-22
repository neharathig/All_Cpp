#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin >>n>>m;

    int array[n][m];

    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < m ; j++)
        {
            cin >> array[i][j];
        }
    }

    int rowstart = 0, rowend = n-1;
    int colstart = 0, colend = m-1;

    while (rowstart <= rowend && colstart <= colend)
    {
        // for rowstart
        for (int col = colstart; col < colend; col++)
        {
            cout<<array[rowstart][col]<<" ";
        }

        rowstart++;

        // for colend
        for(int row=rowstart; row<=rowend; row++)
        {
            cout<<array[row][colend]<<" ";
        }
        colend--;

        // for rowend
         for (int col = colend; col >= colstart; col--)
        {
            cout<<array[rowend][col]<<" ";
        }
        rowend--;

        //for colstart
         for(int row=rowend; row >= rowstart; row--)
        {
            cout<<array[row][colstart]<<" ";
        }
        colstart++;

        
    }
    

    return 0;

}