#include <iostream>
#include <vector>

using namespace std;

const int SIZE = 7; // Adjust size as needed

struct Node {
  int data;
  Node* next;
};

vector<Node*> chain(SIZE, NULL); // Array of linked list heads

void init() {
  for (int i = 0; i < SIZE; ++i) {
    chain[i] = NULL;
  }
}

void insert(int value) {
  Node* newNode = new Node; // Use new operator for dynamic allocation
  newNode->data = value;
  newNode->next = NULL;
  int key = value % SIZE;

  if (chain[key] == NULL) {
    chain[key] = newNode;
  } else {
    Node* temp = chain[key];
    while (temp->next != NULL) {
      temp = temp->next;
    }
    temp->next = newNode;
  }
}

void search(int value)
{
    Node *newNode = new Node ;
    if(newNode -> )
}

void print() {
  for (int i = 0; i < SIZE; ++i) {
    cout << "chain[" << i << "] --> ";
    Node* temp = chain[i];
    while (temp != NULL) {
      cout << temp->data << " --> ";
      temp = temp->next;
    }
    cout << "NULL" << endl;
  }
}

int main() {
  init();

  insert(7);
  insert(0);
  insert(3);
  insert(10);
  insert(4);
  insert(5);

  print();
  search();

  return 0;
}
