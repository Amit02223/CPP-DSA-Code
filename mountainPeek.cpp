#include<iostream>
using namespace std;

int mountainPeek( int arr[] , int size)
{
    int start = 0 , end = size -1 ;
    int mid = start + (end - start)/2;
    while (start<end)
    {
        if (arr[mid] < arr[mid+1])
        {
            start = mid+1;
        }
        else{
            end = mid ;
        }
        mid = start + (end - start)/2;
    }
    return start;
    
}
int main()
{
    int n ;
    cout<<"Enter the size : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : "<<endl;
    for (int  i = 0; i < n-1; i++)
    {
        cin>>arr[i];
    }
    cout<<"index of Peek element is : "<< mountainPeek(arr , n );
    return 0;
}