#include<iostream>
using namespace std;
  
//  void print(int arr[],int index , int n)
//  {
//     if(index==n)
//     {
//      return ; 
//     } 
//     cout<<arr[index]<<" ";
//     print(arr , index+1 , n);
//  }

void print(int arr[], int index)
{
    if(index == -1)
    return;

    print(arr , index-1);
    cout<<arr[index]<<" "; 
}


int main()
{
    int arr[]= {1,5,4,2,3};

    print(arr , 4);
}