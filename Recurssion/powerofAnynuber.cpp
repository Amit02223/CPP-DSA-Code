#include<iostream>
using namespace std;

int power(int num , int n)
{
            if(n==1){
            return num;
            }

        return num*power(num , n-1);

}

int main()
{
    int  num , n ;
    cin>>num>>n;
    cout<<power(num, n);
    return 0;
}