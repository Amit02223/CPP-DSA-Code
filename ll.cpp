#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void print(node* head){
    
}

int main()
{
    node *first = new node(10);
    node *head = first;
    node *tail = first;
    // cout<<first -> data;
}