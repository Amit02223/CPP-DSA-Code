#include<iostream>
using namespace std ;
int main()
{
    int arr1[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[4][3]={2,5,7,6,4,3,12,45,75,32,21,85};
    int ans[4][3];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            ans[i][j]=arr1[i][j]+arr2[i][j];
        }
        
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        
    }
    
    
}