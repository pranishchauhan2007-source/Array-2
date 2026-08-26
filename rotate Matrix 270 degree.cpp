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

    // 270 degree clockwise
    for(int i = 0; i < n; i++)
    {
        for(int j = n-1; j >= 0; j--)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}