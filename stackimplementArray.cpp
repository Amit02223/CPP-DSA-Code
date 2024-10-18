#include <iostream>
using namespace std ;

class stack{
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


//push..
void push(int value)
{
   if(top==size-1)
   {
    cout<<"stack overflow : ";
    return;
   }
   
    top++;
    arr[top] = value;
}

void pop()
{
    if(top == -1){
    cout<<"stack underflow : ";
    return;
    }
    top--;
}

int peek ()
{
    if(top==-1)
    {
        cout<<"stack is empty";
        return -1;
    }
    else 
    
        return arr[top];
    
}
bool isEmpty()
{
    if(top==-1)
    {
        return 1;
    }
    else 
    return 0;
}

int isSize()
{
    return top+1;
}
};


int main(){
   stack s(5);
   s.push(5);
   s.push(8);
   s.push(6);
   s.push(4);
   cout<<s.peek()<<endl;
   s.pop();
   cout<<s.peek();
}