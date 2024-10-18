#include<iostream>
using namespace std;
// int print(int i,int n)
// {
//     if(i==n){
//     cout<<i;
//     return 0;
//     }
//     cout<<i<<" ";
//     print(i+1,n);

// }




// int main()
// {

//     int i , n;
//     cin>>i>>n;

//     print(i,n);

//     return 0;
// }  

int print(int n)
{ 
    if(n==1)
    {
        cout<<n;
        return 0;
    }

    print(n-1);
    cout<<" "<<n;
}

int main()
{

    int n;
    cin>>n;

    print(n);

    return 0;
}