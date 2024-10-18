#include<iostream>
using namespace std;

int sumsqrt(int n)
{
        if(n==1)
        {
            return 1;
        }

    return    n*n+sumsqrt(n-1);
}


int main()
{
    
    int n ;
    cin>>n;
    cout<<sumsqrt(n);
    return 0;
}