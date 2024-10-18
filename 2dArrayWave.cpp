#include<iostream>
using namespace std ;

void wave(int arr[][4] , int row ,int  col)
{
    for (int i = 0; i < col; i++)
    {
        if (col%2==0)
        {
          for (int j = 0; j < row; j++)
          {
            cout<<arr[j][i]<<" ";
          }
          
        }
        else{
            for (int j = row-1; j >= 0; j--)
            {
                cout<<arr[j][i]<<" ";
            }
            
        }
        
    }
    
}
int main()
{
   int  arr1 [3][4] = {3,4,3,5,4,6,65,43,22,43,54,56};
    
    
    wave(arr1 , 3 ,4);
}