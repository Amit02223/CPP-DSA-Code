#include <iostream>
using namespace std;

class stack
{
    int *arr;
    int size;
    int top;

public:
    stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[s];
    }
    void push(int value)
    {
        if (top == size - 1)
        {
            cout << "stack overflow!!!";
            return;
        }
        else
        {
            top++;
            arr[top] = value;
            cout << "Pushed  " << value << "   in the stack" << endl;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "stack underflow!!!";
            return;
        }
        else
        {
            top--;
            cout<<"Popped "<<arr[top+1]<<" from stack"<<endl;
        }
    }
    int peek()
    {
        if (top == -1)
        {
            cout << "stack is empty!!!";
        }
        else
        {
            return arr[top];
        }
    }
    bool isEmpty()
    {
        return top == -1;
    }
    int isSize()
    {
        return top + 1;
    }
};

int main()
{
    stack s(5);
    s.push(42);
    s.push(45);
    s.push(49);
    s.push(41);
    s.push(40);
    s.pop();
    s.pop();
    cout<<s.peek()<<endl;
    cout<<s.isSize()<<endl;
    cout<<s.isEmpty()<<endl;
    return 0;
}