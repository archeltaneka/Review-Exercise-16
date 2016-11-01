#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	int count; // loop counter
	vector<int> vect; // vector object
	
	// use .size to get number of the elements
	cout << "vect starts with " << vect.size() << " elements" << endl;
	
	// use push_back to push values into vector
	for(count = 0; count < 10; count++)
	{
		vect.push_back(count);
	}
	
	// display the size of the vector
	cout << "The vect now has " << vect.size() << " elements. Here they are: \n";
	
	// use [] operator to display each element
	for(count = 0; count < vect.size(); count++)
	{
		cout << vect[count] << " ";
	}
	cout << endl;
	
	// use pop_back member function
	cout << "Popping the values out of vect..." << endl;
	for(count = 9; count < 10; count++)
	{
		vect.pop_back();
	}
	
	// display vector size
	cout << "Now, vect has " << vect.size() << " elements. They are: " << endl;
	
	// display elements
	for(count = 0; count < vect.size(); count++)
	{
		cout << vect[count] << " ";
	}
	cout << endl;
	
	// add 1 more element to the end of the array
	for(count = 9; count < 10; count++)
	{
		int lastElement = 132;
		vect.push_back(lastElement);
	}
	
	// display vector size
	cout << "After adding the last element, now vect has " << vect.size() << "elements. They are: " << endl;
	
	// display elements after adding last element
	for(count = 0; count < vect.size(); count++)
	{
		cout << vect[count] << " ";
	}
	
	return 0;
	
}
