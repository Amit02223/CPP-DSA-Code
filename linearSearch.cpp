#include <iostream>
using namespace std ;

bool search(int arr[] , int size , int key)
{
    for (int i = 0; i < size ; i++)
    {
        if(arr[i] == key)
        {
            return 1 ;
        }
    }
    return 0;
}

int main()
{
  int n ;
  cout<<"Enter the size of elements : "<<endl;
  cin>>n;
  int arr[n];
  cout<<"Enter elements :";
  for (int i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
  int key;
  cout<<"Enter element for search : "<<endl;
  cin>>key;
  bool found = search(arr , n , key);
  if (found)
  {
    cout<<"Element is persent";
  }
  else{
    cout<<"Element is absent ";
  }
  return 0;
  
}






