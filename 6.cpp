#include <iostream>
using namespace std;

// declares IntArray class
class IntArray{
	private:
		int *arrPtr; // pointer to array
		int arraySize; // array size
	public:
		// declares SubscriptError class
		class SubscriptError{};
		
		// default constructor
		IntArray()
		{
			arrPtr = 0;
			arraySize = 0;
		}
		
		// constructor
		IntArray(int size)
		{
			arrPtr = new int(size);
			for(int count = 0; count < arraySize; count++)
			{
				*(arrPtr + count) = 0;
			}
		}
		
		// copy constructor
		IntArray(const IntArray &obj)
		{
			arraySize = obj.arraySize;
			arrPtr = new int(arraySize);
			for(int count = 0; count < arraySize; count++)
			{
				*(arrPtr + count) = *(obj.arrPtr + count);
			}
		}
		
		// destructor
		~IntArray()
		{
			if(arraySize > 0)
			{
				delete [] arrPtr;
			}
		}
		
		// overloading [] operator
		int &operator[](const int &sub)
		{
			if(sub < 0 || sub >= arraySize)
			{
				// throw exception
				throw SubscriptError();
			}
			return arrPtr[sub];
		}
};

// main function
int main(){
	
	const int SIZE = 10; // array size
	
	// creates an IntArray object with 10 elements
	IntArray table[SIZE];
	
	// store values
	for(int x = 0; x < SIZE; x++)
	{
		table[x] = (x * 2);
	}
	
	// display values
	try{
		for(int x = 0; x < SIZE; x++)
		{
			cout << table[x] << " ";
		}
		cout << endl;
	}
	catch(IntArray::SubscriptError)
	{
		cout << "Invalid Subscript!";
	}
	
	// use the standard + operator on array elements
	for(int x = 0; x < SIZE; x++)
	{
		table[x] = table[x] + 5;
	}
	
	// display values
	try{
		for(int x = 0; x < SIZE; x++)
		{
			cout << table[x] << " ";
		}
		cout << endl;
	}
	catch(IntArray::SubscriptError)
	{
		cout << "Invalid Subscript!";
	}
	
	// Use the standard ++ operator on array elements
	for(int x = 0; x < SIZE; x++)
	{
		table[x]++;
	}
	
	// display values
	try{
		for(int x = 0; x < SIZE; x++)
		{
			cout << table[x] << " ";
		}
		cout << endl;
	}
	catch(IntArray::SubscriptError)
	{
		cout << "Invalid Subscript!";
	}
	
	return 0;
	
}
