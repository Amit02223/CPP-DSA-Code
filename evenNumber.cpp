#include<iostream>
using namespace std;

int even(int n)
{
    if(n==2)
    {
        cout<<n;
        return 0;
    }

    even(n-2);
    cout<<"\n"<<n;
}


int main()
{
    int n;
    cin>>n;
    even(n);
    return 0;
}