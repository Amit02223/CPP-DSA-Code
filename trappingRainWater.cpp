#include <iostream>
using namespace std;

int trapping(int height[] , int n)
{
    int leftMax[n], rightMax[n];
    leftMax[0] = 0;
    for (int i = 1; i < n ; i++)
    {
        leftMax[i] = max(leftMax[i - 1], height[i - 1]);
    }
    rightMax[n - 1] = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        rightMax[i] = max(rightMax[i + 1], height[i + 1]);
    }
    int water = 0;
    for (int  i = 0; i < n; i++)
    {
        int minheight = min(leftMax[i],rightMax[i]);
        if(minheight - height[i]>=0)
        {
            water += minheight - height[i];
        }   
    }
    return water;
}

int main()
{
    int n ;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the value of array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
   cout << trapping(arr , n);

    return 0;
}