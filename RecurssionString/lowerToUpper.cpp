#include <iostream>
using namespace std;

void convert(string &str, int index)
{
    if (index == -1)
        return;

    str[index] = 'A' + str[index] - 'a';
    convert(str, index - 1);
}

int main()
{
    string str = "amitsaini";
    convert(str, 9);
    cout << str;

    return 0;
}