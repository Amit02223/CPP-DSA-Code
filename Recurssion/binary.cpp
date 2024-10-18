#include <iostream>
using namespace std;

bool binary(int arr[], int start, int end, int k)
{
    if (start > end)
        return 0;
    int mid = start + (end - start) / 2;

    if (arr[mid] == k)
        return 1;

    if (k < arr[mid])
    {
        binary(arr, start, mid - 1, k);
    }
    else
        binary(arr, mid + 1, end, k);
}

int main()
{
    int k = 22;
    int arr[] = {3, 8, 11, 15, 20, 22};

    cout << binary(arr, 0, 5, k);
    return 0;
}