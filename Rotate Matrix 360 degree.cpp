#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int row = 3, col = 3;

    // 360 degree = 2 times 180 degree
    for(int k = 0; k < 2; k++)
    {
        // 180 degree rotation
        for(int i = 0; i < row; i++)
        {
            for(int j = i; j < col; j++)
            {
                swap(arr[i][j], arr[row-1-i][col-1-j]);
            }
        }
    }

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}