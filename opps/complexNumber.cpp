#include<bits/stdc++.h>
using namespace std;

class Complex {
    int real , imag;
    public:

    Complex(){};
    Complex(int real,int imag)
    {
        this->real=real;
        this->imag=imag;
    }

    void Display()
    {
        cout<<real<<" +"<<" i"<<imag<<endl;
    }

   Complex operator + (Complex &c)
    {
        Complex ans;
        ans.real = real + c.real;
        ans.imag = imag + c.imag; 
        return ans;
    }

};

int main()
{
    Complex c1(3,4);
    Complex c2(4,6);
    Complex c3 = c1+c2;
    c3.Display();
    return 0;
}