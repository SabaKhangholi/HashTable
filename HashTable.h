#pragma once
#include <iostream>
#include <algorithm>
using std::string;
using std::endl;
using std::cout;

class HashTable {
public:

	// Default constructor
	HashTable();

	// Constructor
		// makes hash table that stores n items
		// size of underlying array should be the smallest prime number equal to or greater than 2n
		// sets all array elements to the empty string
		// sets the value used by h2
	HashTable(int n);

	// Copy constructor
	HashTable(const HashTable& hash);

	// Destructor
	~HashTable();

	// Overloaded assignment operator
		// returns reference to the calling object
	HashTable& operator=(const HashTable& hash);

	// insert
		// searches hash table for the method's string param
			// if not found, inserts parameter string into the hash table
				//if hash table load factor > 0.67 -> create new hash table of size equal to first prime num greater than 2n
				//								   -> inserts original contents in the new table at appropriate places
				//								   -> sets the value used by h2
	void insert(string str);

	// find 
		// if string param is in hash table -> return true
		// else -> return false
	bool find(string str);

	// size
		// returns number of items stored in the hash table
	int size();

	// maxSize
		// returns the size of the underlying array
	int maxSize();

	// loadFactor
		// returns the load factor of the hash table
	float loadFactor();

	int strToInt(string str);

private:
	string* stringArr;	// refer to underlying array of string objects
	int arrSize;	// size of underlying array
	int h2Value;	// value used by h2
	int numItems;	// current number of times in hash table

	// Function to find 
	bool boolNumFinder();
	// Helper copy function
	void copyArr(const HashTable& arr);
	// String to int function
	
};
