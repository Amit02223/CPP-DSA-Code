#include<bits/stdc++.h>
using namespace std;

class Customer 
{
    string name;
    int bal, acc_no;
    static int total_acc;
    static int sum;
    public:
    Customer(string n , int ac, int b)
    {
        name = n ;
        bal = b;
        acc_no = ac;
        total_acc++;
        sum += bal;
    }

    void deposit(int amount)
    {
        if(amount>0)
        {
            cout<<"Deposit amount is : "<<amount<<endl;
            bal+=amount;
            sum+=amount;
        }
    }

    void withdraw(int amount)
    {
        if(amount<=bal&&amount>0)
        {
            cout << "withdraw amount is : " << amount << endl;

            bal-=amount;
            sum-=amount;
        }
    }

    void display(){
        cout<<name<<" "<<acc_no<<" "<<bal<<endl;
    }
    void total_no()
    {
        cout<<"Total accounts are : "<<total_acc<<endl;
        cout<<"Total balance are : "<<sum<<endl;
    }
};

int Customer::sum=0;
int Customer::total_acc = 0;

int main()
{

    Customer A1("Amit", 1,1000);
    Customer A2("Rohit",2,1010);
    A1.display();
    A2.display();
    A1.total_no();
    A1.deposit(500);
    A1.display();
    A2.display();
    A1.total_no();

    return 0;
}