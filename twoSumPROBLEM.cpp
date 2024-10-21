#include <iostream>

using namespace std ;
 
int twoSum(int num[] , int n , int target)
{
    int ans;
    int s = 0 , e = n-1;
    while(s<e)
    {
      if (num[s]+num[e]==target)
      {
        ans=s;
        ans=e;
        return ans;
      }
      else if(num[s]+num[e]<target)
      {
        s++;
      }
      else
      e--;
    }
}
int main()
{
  int arr[5] = {1,2,4,5,7};
  int target;
  cin>>target;
  cout<<"sum is :" <<twoSum(arr , 5 , target );
  return 0;
}