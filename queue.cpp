#include <iostream>
#include <queue>
using namespace std;

class Queue{
    int *arr;
    int size;
    int front, rear;

public:
    Queue(int n)
    {
        size=n;
        arr = new int[n];
        front = rear = -1;
    }

    bool isEmpty()
    {
        return front == -1;
    }

    bool isFull()
    {
       return rear==size-1;
    }

    void push(int x)
    {
        if(isEmpty())
        {
            cout<<"Pushed "<<x<<" into the queue "<<endl;
            front = rear = 0;
            arr[0]=x;
            return;
        }
        else if (isFull())
        {
            cout<<"Queue is overflow!!!"<<endl;
            return;
        }
        else{
            rear=rear+1;
            arr[rear]=x;
            cout<<"Pushed "<<x<<" into the queue "<<endl;
        }
    }

    void pop()
    {
        if(isEmpty())
        {
            cout<<"Queue is underflow!!!"<<endl;
            return;
        }
        else 
        {
            if(front == rear)
            {
                cout<<"Popped "<<arr[front]<<" from the queue "<<endl;
                front=rear=-1;
            }
            else
            {
                 cout<<"Popped "<<arr[front]<<" from the queue "<<endl;
            front=front+1;
            }
        }
    }

    int start()
    {
        if(isEmpty())
        {
        cout<<"Queue is Empty!!!"<<endl;
        return -1;
        }
        else{
        return arr[front];
    }
    }

    
};

int main()
{
   Queue q(5);
   q.push(15);
   q.push(159);
   q.push(18);
   q.push(45);
   q.pop();
   q.pop();
   q.pop();
   q.pop();
   cout<<q.isEmpty()<<endl;
   cout<<q.isFull()<<endl;
   cout<<q.start();
   return 0;
}