#include <iostream>
using namespace std ;

 int firstOcc(int arr[] , int size , int key)
{
    int start = 0 , end = size-1;
    int mid = start + (end - start)/2;
    int ans = -1 ;
    while(start <= end)
    {
        if (arr[mid] == key )
        
        {
            ans = mid ;
            end = mid -1 ;
        }
        if (key > arr[mid])
        {
            start = mid +1 ;
        }
        else
        {
            end = mid -1 ;
        }
        mid = start + (end - start )/2;
        
        
    }
    return ans ;
}
int lastOcc(int arr[] , int size , int key)
{
    int start = 0 , end = size-1;
    int mid = start + (end - start)/2;
    int ans = -1 ;
    while(start <= end)
    {
        if (arr[mid] == key )
        
        {
            ans = mid ;
            start = mid + 1 ;
        }
        if (key > arr[mid])
        {
            start = mid +1 ;
        }
        else
        {
            end = mid -1 ;
        }
        mid = start + (end - start )/2;
        
        
    }
    return ans ;
}

int main()
{
    int n ;
    cout<<"enter size : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements : "<<endl;
    for (int  i = 0; i < n-1; i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the element for first occurrence : "<<endl;
    cin>>k;
    cout<<"first occurrence is : "<<  firstOcc(arr, n , k)<<endl;
    cout<<"last occurrence is : "<<  lastOcc(arr, n , k)<<endl;

    return 0; 

}