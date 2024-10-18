#include <iostream>
#include <vector>
#include <string>
using namespace std ; // For string keys (modify if needed)

const int TABLE_SIZE = 10; // Adjust table size as needed

// Define a key-value pair structure
struct KeyValuePair {
  string key;
  int value;
};

class HashTable {
public:
  HashTable() {
    // Initialize the hash table with empty key-value pairs
    table = vector<KeyValuePair>(TABLE_SIZE, { "", -1 });
  }

  // Hash function (simple modulo for demonstration)
  int hash(const string& key) const {
    int sum = 0;
    for (char c : key) {
      sum += static_cast<int>(c);
    }
    return sum % TABLE_SIZE;
  }

  // Insert a key-value pair into the hash table
  void insert(const string& key, int value) {
    int index = hash(key);
    int probe = 0; // To handle collisions using linear probing

    while (table[index].key != "" && table[index].key != key) {
      // Check for empty slot or existing key with same hash value
      index = (index + probe) % TABLE_SIZE; // Linear probing
      probe++;
    }

    table[index].key = key;
    table[index].value = value;
  }

  // Search for a key in the hash table
  int search(const string& key) const {
    int index = hash(key);
    int probe = 0;

    while (table[index].key != "" && table[index].key != key) {
      // Check for empty slot or existing key with same hash value
      if (table[index].key == "") {
        return -1; // Key not found
      }
      index = (index + probe) % TABLE_SIZE;
      probe++;
    }

    return table[index].value; // Return value if key found
  }

private:
  vector<KeyValuePair> table;
};

int main() {
  HashTable hashTable;

  hashTable.insert("apple", 10);
  hashTable.insert("banana", 20);
  hashTable.insert("cherry", 30);

  int appleValue = hashTable.search("apple");
  int mangoValue = hashTable.search("mango"); // Not inserted, so -1

  cout << "apple value: " << appleValue << endl;
  cout << "mango value: " << mangoValue << endl;

  return 0;
}
