#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool divide(int arr[], int n)
{
    int prefix = 0, total_sum = 0;
    for (int i = 0; i < n; i++)

        total_sum += arr[i];
    for (int i = 0; i < n; i++)
    {
        prefix += arr[i];
        int ans = total_sum - prefix;
        if (ans == prefix)
            return 1;
    }

    return 0;
}

int main()
{
    int n;
    cout << "Enter the size of array:";
    cin >> n;
    int v[n];
    cout << "Enter the value of array:";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout<<divide(v , n);
    
}