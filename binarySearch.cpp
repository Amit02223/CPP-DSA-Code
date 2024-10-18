#include <iostream>
using namespace std;

int binarySearch(int arr[] , int size , int  key)
{
    int start = 0 , end = size - 1 ;
  //  int mid = start + (end -start )/2;
   int mid = start/2 + end/2;
   
    while (start <= end)
    {
      if (arr[mid] == key)
      {
        return mid;
      }
      if (key > arr[mid])
      {
        start = mid +1 ;
      }
      else {
        end = mid -1 ;
      }
        mid = start + (end -start )/2;
    }
    return -1 ;
}

 int main()
 {
    int n ;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int key ;
    cout<<"Enter the element that you want to search : ";
    cin>>key;

    //  int even[6] = {2 , 3 , 6 ,23 ,43 ,54};
    //  int odd[5] = {3 ,5 ,6,8,23};
    int evenIndex = binarySearch( arr ,  n , key);
    cout<<"Index is :"<< evenIndex <<endl;
    return 0;
 }
