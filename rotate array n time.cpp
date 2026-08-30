#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int n;

    cin >> n;

    n = n % size;

    for(int k = 0; k < n; k++)
    {
        int temp = arr[size - 1];

        for(int i = size - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[0] = temp;
    }

    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}