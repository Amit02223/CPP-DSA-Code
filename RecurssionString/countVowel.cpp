#include <iostream>
using namespace std;

int count_vowel(string str, int index)
{
    if (index == -1)
        return 0;

    if (str[index] == 'a' || str[index] == 'e' || str[index] == 'i' || str[index] == 'o' || str[index] == 'u')
    {

        return 1 + count_vowel(str, index - 1);
    }
    else
        return count_vowel(str, index - 1);
}

int main()
{
    string str = "rohit";

    cout << count_vowel(str, 4);

    return 0;
}