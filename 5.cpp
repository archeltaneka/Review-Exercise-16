#include <iostream>
using namespace std;

// declares Total template class
template <class Total>
int displayTotal(Total totalNum)
{
	return totalNum;
}

int main(){
	
	// declares variable
	const int NUM_INPUT = 5;
	int numbers[NUM_INPUT];
	int counter;
	int total;
	
	// get prompt from the user
	for(counter = 0; counter < NUM_INPUT; counter++)
	{
		cout << "Input #" << counter + 1 << " number: ";
		cin >> numbers[counter];
	
	}
	
	// get the total
	for(counter = 0; counter < NUM_INPUT; counter++)
	{
		total += numbers[counter];
	}
	
	// get the total
	cout << "Total number: " << displayTotal(total);
	
}
