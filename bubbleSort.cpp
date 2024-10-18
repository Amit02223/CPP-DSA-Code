#include <iostream>
using namespace std ;

void bubbleSort(int arr[] , int size){
    for (int  i = 0; i < size  ; i++)
    {
        for (int j = 0; j <  size -i -1 ; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j] , arr[j+1]);
            }
            
        }
        
    }
    
}
int main ()
{
  int arr[5] = { 5,2,6,3,4};
    bubbleSort(arr , 5);
  for (int i = 0; i < 5; i++)
  {
    cout<<arr[i]<<" ";
  }
  
}