#include "HashTable.h"
#include "spellcheck.h"


	// Default constructor - size of underlying array is 101
	HashTable::HashTable(){
		cout<<"constructor called"<<endl;
		arrSize = 101;
		stringArr = new string[arrSize];	
		// initialize all array values to ""
		for (int i=0; i++; i<arrSize){
			stringArr[i] = "";
		}
		// SET VALUE USED BY H2 -- WHAT DOES THAT MEAN ******************
	}

	// Constructor
		// makes hash table that stores n items
		// size of underlying array should be the smallest prime number equal to or greater than 2n
		// sets all array elements to the empty string
		// sets the value used by h2
	HashTable::HashTable(int n){
		arrSize = 2*n + 1;
		stringArr = new string[arrSize];
		for (int i=0; i++; i<arrSize){
			stringArr[i] = "";
		}
		// SET VALUE USED BY H2 -- WHAT DOES THAT MEAN ******************
	}

	// Copy constructor
	HashTable::HashTable(const HashTable & hash){
		copyArr(hash);
	}

	// Destructor
	HashTable::~HashTable(){
		cout<<"destructor called"<<endl;
		delete [] stringArr;
	}

	// Overloaded assignment operator
		// returns reference to the calling object
	HashTable &HashTable::operator=(const HashTable &hash){
		if (this != &hash){
			delete [] stringArr;
			copyArr(hash);
		}
		return *this;
	}

	// insert
		// searches hash table for the method's string param
			// if not found, inserts parameter string into the hash table
				//if hash table load factor > 0.67 -> create new hash table of size equal to first prime num greater than 2n
				//								   -> inserts original contents in the new table at appropriate places
				//								   -> sets the value used by h2
	void HashTable::insert(string str){

	}

	// find 
		// if string param is in hash table -> return true
		// else -> return false
	bool HashTable::find(string str){
		return true;
	}	

	// size
		// returns number of items stored in the hash table
	int HashTable::size(){
		return 0;
	}

	// maxSize
		// returns the size of the underlying array
	int HashTable::maxSize(){
		return 0;
	}

	// loadFactor
		// returns the load factor of the hash table
	int HashTable::loadFactor(){
		return 0;
	}

	void HashTable::copyArr(const HashTable& arr){
		arrSize = arr.arrSize;	// copy max array size
		numItems = arr.numItems;	// copy actual array size
		stringArr = new string[arrSize];
		// create a new dynamic array with new characteristics
		for (int i = 0; i<numItems;i++){
			//initialize copy array with parameter array elements
			stringArr[i] = arr.stringArr[i];
		}
	}
