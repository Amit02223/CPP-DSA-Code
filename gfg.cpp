#include<iostream>
using namespace std;
int main(){
    int n=5;
    int count=0;
    int a[5]={2,4,1,3,5};
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j]&&i<j)
            {
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}

 