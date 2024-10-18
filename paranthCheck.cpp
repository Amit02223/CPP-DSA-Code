#include<iostream>
#include<stack>
using namespace std ;

bool para(string str)
{
    stack<char>ch;
    for (int i = 0; i < str.size(); i++)
    {
       if (str[i]=='(')
       {
        ch.push(str[i]);
       }
       else
       {
        if (ch.empty())
        {
            return 0;
        }
        else
        {
           ch.pop();
        }
        
       }
       
    }
    return ch.empty();
    
}

int main ()
{
    string str = "(()())";
    cout<<para(str)<<endl;
    return 0;

}