#include<iostream>
using namespace std;

int fact(int n)
{
    
    if(n==0){
    return 1;
    }    
  return  n*fact(n-1);
}
 
int main()
{
    int n ;
    cin>>n;
    if(n<0)
    {
        cout<<"factorial is not possible ";
    }
   cout<<fact(n);
    return 0;
}