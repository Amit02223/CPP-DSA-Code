#include<iostream>
using namespace std;

int main()
{
    int *ptr = new int;
    *ptr = 22;
    float *ptr2 = new float;
    *ptr2 = 22.23;
    cout<<*ptr<<endl<<*ptr2<<endl<<ptr<<endl<<ptr2<<endl;

    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int *p = new int[n];

    for (int i = 0; i < n; i++)
    {
       p[i]=i+1;
    }
    

    
    for (int i = 0; i < n; i++)
    {
       cout<<p[i]<<endl;
    }

    delete ptr;
    delete ptr2;
    delete[] p;
}