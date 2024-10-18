#include<iostream>
using namespace std;

bool palindrom(string str, int start, int end)
{

    if(start>=end)
    {
        return 1;
    }

    if(str[start]!=str[end])
    {
        return 0;
    }

  return palindrom(str,start+1,end-1);

}


int main()
{
    string str = "abcdcba";
    cout<<palindrom(str,0,6);
    return 0;
}