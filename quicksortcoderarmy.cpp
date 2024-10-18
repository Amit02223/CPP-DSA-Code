#include<iostream>
using namespace std;


int partician(int arr[],int start,int end)
{
    int position = start;
    for (int i = start; i <=end; i++)
    {
        if(arr[i]<=arr[end])
        {
            swap(arr[i],arr[position]);
            position++;
        }
    }
    return position-1;
}
void quicksort(int arr[], int start, int end)
{
     if(start>=end)
     {
        return ;
     } 

    int pivot = partician(arr,start,end);
    quicksort(arr,start,pivot-1);
    quicksort(arr,pivot+1,end);
}


int main(){
   int arr[] = {5,4,8,6,5,4,5,21,45};

   quicksort(arr,0,8);

   for (int i = 0; i <8; i++)
   {
    cout<<arr[i]<<" ";
   }
    return 0;
}