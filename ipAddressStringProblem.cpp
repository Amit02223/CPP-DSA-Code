#include <iostream>
using namespace std;

int main()
{
    string st = "1.1.1.1.1";
    string ans;
    int index=0;
    while(index!=st.length()-1)
    {
      if(st[index]=='.')
      ans = ans + "[.]";
      else
      ans += st[index];
      index++;
    }
    cout<<ans;
    return 0;
}