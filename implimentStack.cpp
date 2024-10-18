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
   // push
   void push(int value)
   {
      if (top == size - 1)
      {
         cout << "Stack overflow" << endl;
         return ;
      }
      else
      {
         top++;
         arr[top] = value;
         cout << "Pushed  " <<   value << "   in the stack" << endl;
      }
   }
   // pop
   void pop()
   {
      if (top == -1)
      {
         cout << "stack underflow" << endl;
      }
      else
      {
         top--;
         cout<<"Popped "<<arr[top+1] << " from stack"<<endl;
      }
   }
   int peek()
   {
      if (top == -1)
      {
         cout << "stack is empty" << endl;
         return -1;
      }
      else
         return arr[top];
   }
   bool isEmpty()
   {  
         return  top==-1;
   }

  int isSize()
  {
     return top+1;
  }
};
 int main()
{
    stack s(5);
    s.push(5);
    s.push(8);
    s.push(9);
    s.push(10);
    s.pop();
     cout<< s.peek()<<endl;
    cout<<s.isSize()<<endl;
    cout<<s.isEmpty()<<endl;
   return 0;
}