#include <iostream>
#include <vector>

const int TABLE_SIZE = 10; // Adjust table size as needed

// Hash function (simple modulo for demonstration)
int hashFunction(int key) {
  return key % TABLE_SIZE;
}

// Function to insert an element into the hash table using linear probing
void insert(std::vector<int>& hashTable, int key) {
  int index = hashFunction(key);
  int probe = 0; // Keeps track of probing attempts

  // Loop until an empty slot is found or the table is full
  while (probe < TABLE_SIZE && hashTable[index] != -1) {
    index = (index + 1) % TABLE_SIZE; // Probe next index
    probe++;
  }

  // Check if table is full
  if (probe == TABLE_SIZE) {
    std::cout << "Hash table overflow!" << std::endl;
    return;
  }

  // Insert the key at the found index
  hashTable[index] = key;
  std::cout << "Element " << key << " inserted at index " << index << std::endl;
}

// Function to search for an element in the hash table
bool search(const std::vector<int>& hashTable, int key) {
  int index = hashFunction(key);
  int probe = 0;

  // Loop until the key is found or an empty slot is encountered
  while (probe < TABLE_SIZE && (hashTable[index] != key && hashTable[index] != -1)) {
    index = (index + 1) % TABLE_SIZE;
    probe++;
  }

  // Return true if key is found, false otherwise
  return (hashTable[index] == key);
}

int main() {
  std::vector<int> hashTable(TABLE_SIZE, -1); // Initialize table with empty slots (-1)

  insert(hashTable, 15);
  insert(hashTable, 28);
  insert(hashTable, 11);
  insert(hashTable, 37);

  if (search(hashTable, 11)) {
    std::cout << "Element 11 found in the hash table." << std::endl;
  } else {
    std::cout << "Element 11 not found in the hash table." << std::endl;
  }

  return 0;
}
