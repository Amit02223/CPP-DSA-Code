#include <iostream>
using namespace std ;

const int SIZE = 10; 


int hash(int key) {
  return key % SIZE;
}


int probe(int H[], int key) {
  int index = hash(key);
  int i = 0;
  while (H[(index + i) % SIZE] != 0) {
    i++;
  }
  return (index + i) % SIZE;
}


void Insert(int H[], int key) {
  int index = hash(key);
  if (H[index] != 0) {
    index = probe(H, key); 
  }
  H[index] = key;
}


int Search(int H[], int key) {
  int index = hash(key);
  int i = 0;
  while (H[(index + i) % SIZE] != key && H[(index + i) % SIZE] != 0) {
    i++;
  }
  if (H[(index + i) % SIZE] == key) {
    return (index + i) % SIZE; 
  } else {
    return -1; 
  }
}

int main() {
  int HT[SIZE] = {0}; 

  Insert(HT, 12);
  Insert(HT, 25);
  Insert(HT, 35);
  Insert(HT, 26);

  int foundIndex = Search(HT, 35);

  if (foundIndex != -1) {
    std::cout << "Key found at index: " << foundIndex << std::endl;
  } else {
    std::cout << "Key not found." << std::endl;
  }

  return 0;
}
