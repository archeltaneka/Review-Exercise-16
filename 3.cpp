#include <iostream>
using namespace std;

// creates template class
template <class minValue>
int minimum(minValue num1, minValue num2)
{
	if(num1 < num2)
	{
		int numbers[num1 - 1]; // hold the numbers less than the 2 arguments
		for(int counter = 0; counter < num1 - 1; counter++)
		{
			cout << numbers[counter + 1] << " ";
		}
		cout << endl;
	}
	
	if(num1 > num2)
	{
		int numbers[num2 - 1];
		for(int counter = 0; counter < num2 - 1; counter++)
		{
			cout << numbers[counter + 1] << " ";
		}
		cout << endl;
	}
}

template <class maxValue>
int maximum(maxValue num1, maxValue num2)
{
	const int NUM = 10;
	int numbers[NUM];
	
	if(num1 < num2)
	{
		int numbers[NUM - num2]; // hold the numbers less than the 2 arguments
		for(int counter = 0; counter < NUM - num2; counter++)
		{
			cout << numbers[counter + 1] << " ";
		}
	}
	
	if(num1 > num2)
	{
		int numbers[NUM - num1];
		for(int counter = 0; counter < NUM - num1; counter++)
		{
			cout << numbers[counter + 1] << " ";
		}
	}
}

int main(){
	
	minimum(2, 3);
	maximum(6, 7);
	
	return 0;
	
}
