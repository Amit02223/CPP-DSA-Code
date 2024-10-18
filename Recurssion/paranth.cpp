#include<iostream>
#include<vector>
using namespace std;

void substring(int n, vector<string> &ans, vector<string> &temp)
{

}

    int main()
{
    string st = "(()())";
    vector<string>ans;
    vector<string>temp;

    substring(st.size(),ans,temp);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }
    

}