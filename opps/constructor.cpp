#include<bits/stdc++.h>
using namespace std;

class Customer
{
    string name ;
    int balance;
    int acc;

    public:
    Customer(string name, int balance, int acc)
    {
        this->name=name;
        this->acc=acc;
        this->balance=balance;
    }
    void display()
    {
        cout<<name<<" "<<acc<<" "<<balance;
    }
};


int main()
{
    Customer a("amit",4545,1245);
    a.display();

    return 0;
}
