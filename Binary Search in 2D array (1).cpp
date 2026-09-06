#include <iostream>
using namespace std;

int main()
{
    int arr[5][4] = {2,6,10,14,18,20,24,27,29,38,
                   47,52,78,93,102,108,111,200,218,320};

    int n = 5, m = 4;
    int x = 4;

    int start = 0, end = n * m - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        int row_index = mid / m;
        int col_index = mid % m;

        // 1D array me actual index = mid
        if (arr[row_index][col_index] == x)
        {
            cout << "Element found";
            return 0;
        }
        else if (arr[row_index][col_index] < x)
            start = mid + 1;
        else
            end = mid - 1;
    }

    cout << "Element not found";

    return 0;
}