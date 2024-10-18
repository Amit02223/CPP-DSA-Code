#include <iostream>
using namespace std;

void segregate(int arr[], int n)
{
    int s = 0, e = n - 1;
    while (s < e)
    {
        if (arr[s] == 0)
        {
            s++;
        }
        else
        {
            if (arr[e] == 0)
            {
                swap(arr[s], arr[e]);
                s++;
                e--;
            }
            else
                e--; 
        }
    }
}
int main()
{
    int arr[5] = {1, 0, 0, 1, 1};
    segregate(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}