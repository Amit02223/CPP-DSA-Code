#include<iostream>
#include<vector>
using namespace std;



void marge(int arr[], int start, int mid, int end)
{

    vector<int>temp(end-start+1);
    int left = start , right = mid+1 , index = 0;


    while (left<=mid && right<=end)
    {
        if(arr[left]<=arr[right])
        {
            temp[index]=arr[left];
            index++ , left++;
        }

        else
        {
            temp[index]=arr[right];
            index++ , right++;
        }
    }

    while (left<=mid)
    {
        temp[index]=arr[left];
        left++,index++;
    }
    
    
while (right<=end)
{
    temp[index]=arr[right];
    right++,index++;
}

index = 0;

while (start<=end)
{
    arr[start]=temp[index];
    start++,index++;
}
}

void margsort(int arr[], int start, int end)
{
    if(start==end)
    return;

    int mid = start + (end-start)/2;


    margsort(arr , start, mid );
    margsort(arr , mid+1 , end);
    marge(arr, start, mid, end);
}

int main()
{
    int arr[] ={4,2,5,76,32,64,77};

    margsort(arr,0,6);

        for (int i = 0; i < 6; i++)
        {
            cout<<arr[i]<<" ";
        }
        


    return 0;
}