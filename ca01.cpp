#include<iostream>
using namespace std;

int calculatpivot(int arr[],int start, int end){
    int pos = start;
    for (int i = start; i <= end; i++)
    {
        if(arr[i]>=arr[end])
        {
            swap(arr[i],arr[pos]);
            pos++;
        }
    }

    return pos-1;
    
}


void quicksort(int arr[],int start,int end)
{
        if(start>=end)
        {
            return;
        }

    int pivot = calculatpivot(arr,start,end);
    quicksort(arr,start,pivot-1);
    quicksort(arr,pivot+1,end);
}

int main()
{
    int n;
    cout<<"Enter how many transaction you want to add : ";
    cin>>n;
    int Data[n];
    cout<<"Enter Transaction : "; 
    for (int i = 0; i < n; i++)
    {
        cin>>Data[i];
    }
    
    quicksort(Data,0,n-1);

    for (int i = 0; i < n; i++)
    {
        cout<<Data[i]<<" ";
    }
    return 0;
}