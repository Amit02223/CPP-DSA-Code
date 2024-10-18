#include <iostream>
using namespace std;

bool linear(int arr[], int index, int k)
{
    if (index == -1)
        return 0;

    if (arr[index] == k)
        return 1;
    else
        return linear(arr, index - 1, k);
}

int main()
{

    int arr[] = {8, 4, 5, 7, 9, 5, 4};
    int k = 6;
    cout << linear(arr, 6, k);
}