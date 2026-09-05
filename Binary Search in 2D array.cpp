#include <iostream>
using namespace std;

int main()
{
    int arr[20] = {2,6,10,14,18,20,24,27,29,38,
                   47,52,78,93,102,108,111,200,218,320};

    int n = 20;
    int x = 78;

    int start = 0, end = n - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == x)
        {
            cout << "Element found";
            return 0;
        }
        else if (arr[mid] < x)
            start = mid + 1;
        else
            end = mid - 1;
    }

    cout << "Element not found";

    return 0;
}