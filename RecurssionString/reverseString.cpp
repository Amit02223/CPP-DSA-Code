#include <iostream>
using namespace std;

void rev(string &str, int s, int e)
{

    if (s >= e)
    {
        return;
    }

    swap(str[s], str[e]);
    rev(str, s + 1, e - 1);
}

int main()
{

    string str = "Amit";
    rev(str, 0, 3);
    cout << str;
    return 0;
}