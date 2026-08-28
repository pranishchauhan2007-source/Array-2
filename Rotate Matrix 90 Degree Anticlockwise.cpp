#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int n = 3;

    // Transpose
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    // Reverse each column
    for(int j = 0; j < n; j++)
    {
        for(int i = 0, k = n-1; i < k; i++, k--)
        {
            swap(arr[i][j], arr[k][j]);
        }
    }

    // Print
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}