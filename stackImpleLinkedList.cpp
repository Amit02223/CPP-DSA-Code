#include <iostream>
using namespace std ;

class Node {
    public:
    int data ;
    Node *next;
   
    Node(int value) {
         data = value ;
         next = NULL;
    }

};

class stack {
    Node *top ;
    int size ;

    public :
    stack()
    {
        top = NULL;
        size = 0 ;
    }

    // push 
    void push (int value)
    {
        Node *temp = new Node(value);
        if(temp==NULL)
        {
            cout<<"stack overflow";
            return ;
        }
        else
        temp->next = top ;
        top = temp;
        size++;
    }

    // pop

   void pop()
   {
    if(top==NULL)
    {
        cout<<"Stack underflow";
        return ;
    }
    else 
    {
        Node *temp = top;
        top = top->next;
        delete temp;
        size--;
    }
   }
    
     // peek
   int peek()
   {
    if(top==NULL)
    {
        cout<<"stack is empty";
        return -1 ;
    }
    else
    {
        return top->data;
    }
   }

   bool isEmpty(){
    return top==NULL;
    
   }

   bool isSize()
   {
    return size;
   }
};

int main()
{
  stack s;
  s.push(9);
  s.push(29);
  s.push(92);
  s.push(98);
  cout<<s.peek();
  s.pop();
  cout<<s.peek();

}