#include<iostream>
using namespace std ;

void rotateMatrix(int arr[][4],int row,int col)
{
    // int mat[][4];
    for (int i = 0; i < row; i++)
    {
        for (int j = i+1; j < col; j++)
        {
          //mat[j][row-1-i] = arr[i][j];
          swap(arr[i][j],arr[j][i]);
        }
    }
    for (int  i = 0; i < row; i++)
    {
       for (int j = 0; i < col; i++)
       {
        cout<<arr[i][j]<<" ";
       }
       cout<<endl;
    }
    
            
}

int main()
{
 int arr[4][4] = {3,4,2,43,23,5,6,7,56,65,8,98,78,67,55,34};
//  int arr[4][4] = {4,3,43,2,5,23,7,6,65,56,98,8,76,78,34,55};
 rotateMatrix(arr , 4, 4);
}
