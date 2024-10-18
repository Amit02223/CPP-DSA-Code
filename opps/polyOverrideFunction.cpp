#include<bits/stdc++.h>
using namespace std;

class area {
    public:

  int  calculateArea(int r)
    {
        return 3.14*r*r;
    }

    int calculateArea(int l , int b)
    {
        return l*b;
    }
};


int main()
{
    area a;
   cout<< a.calculateArea(1);

    return 0;
}