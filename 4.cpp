#include <iostream>
using namespace std;

// creates function template
template <class Value>
int absoluteVal(Value num)
{
	if(num < 0)
	{
		num = num * -1;
	} else {
		num = num * 1;
	}
	
	return num;
}

int main(){
	
	// declares variables
	int numInput;
	
	// get prompt from the user
	cout << "Input a number: ";
	cin >> numInput;
	cout << "The absolute value of your number is: " << absoluteVal(numInput);
	
	return 0;
	
}
