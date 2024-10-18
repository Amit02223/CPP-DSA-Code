#include <iostream>
using namespace std;

void printIndex(int arr[][4],int row ,int col)
{
    int sum = INT_MIN , index = -1;
    for (int i = 0; i < row; i++)
    {
        int total = 0;
        for (int j = 0; j < col; j++)
        {
            total+=arr[i][j];  
        }
        if (sum<total)
        {
            sum=total;
            index=i;
        }
        
    }
    cout<<index;

    }

int main()
{
 int arr1[3][4]={1,2,3,4,5,6,7,8,9,56,76,87};
 int arr2[3][4]={11,21,31,41,51,61,71,81,91,5,6,7};

 printIndex(arr2,3,4);

}