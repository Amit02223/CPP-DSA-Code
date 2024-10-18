#include<iostream>
using namespace std;

int minimum(int arr[], int index ,int n ){
if(index == n)
{
    return arr[index];
}
  
 return min(arr[index] , minimum(arr, index+1, n));
}

int main()
{

    int arr[] = {5,4,2,1,5,8};
    cout<<minimum(arr, 0 , 6);
    return 0;
}