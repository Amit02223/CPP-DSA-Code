#include <iostream>
using namespace std ;

void selection(int arr[] , int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int index = i ; 
         for(int j = i+1 ; j<n ; j++)
         {
            if (arr[j]<arr[index])
            {
             index = j;
            }
            
         }
         swap(arr[index] , arr[i]);
    }
       
}
int main()
{
    int arr[5] = {5,8,6,9,2};
    selection(arr , 5 );
    
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}