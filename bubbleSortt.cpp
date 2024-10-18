#include<iostream>
using namespace std;


void bubbleSort(int arr[], int n)
{
    for(int i =0; i<n-1; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if (arr[i]>=arr[j])
            {
                swap(arr[i],arr[j]);
            }
            
        }
    }
     
}
int main(){

    int arr[] ={12,41,1,4,2,54};
    bubbleSort(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}