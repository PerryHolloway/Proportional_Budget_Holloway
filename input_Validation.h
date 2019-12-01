#ifndef INPUT_VALIDATION_H
#define INPUT_VALIDATION_H
#include <ios> //for ios_base::failure
#include <iostream>
using namespace std;
//Function prototypes
int validateInt(int&);
char validateChar(char&);
double validateDouble(double&); 

template <typename T>
T getValidatedInput() {
	T result;
	 cin >> result; //Gets input of type T
	//Check if cin failed or if user inputted other types with input
	if ( cin.fail() ||  cin.get() != '\n') {
		//Clears fail message
		 cin.clear();
		//Clears input stream
		while ( cin.get() != '\n') {
			;
		}
		throw  ios_base::failure("Invalid input.");
	}
	return result;
}

int validateInt(int& intInput) {
	while (true) {
		 cout << "Enter an integer: ";
		try {
			intInput = getValidatedInput<int>();
		}
		catch ( exception e) {
			 cerr << e.what() << " Please enter an integer." <<  endl;
			continue;
		}
		break;
	}
	return intInput;
}

char validateChar(char& charInput) {
	while (true) {
		 cout << "Enter a character: ";
		try {
			charInput = getValidatedInput<char>();
		}
		catch ( exception e) {
			 cerr << e.what() << " Please enter a character." <<  endl;
			continue;
		}
		break;
	}
	return charInput;
}

double validateDouble(double& doubleInput) {
	while (true) {
		 cout << "Enter a double (with or without decimal points): ";
		try {
			doubleInput = getValidatedInput<double>();
		}
		catch ( exception e) {
			 cerr << e.what() << " Please enter a double (with or without decimal points).";
       cout <<  endl;		
      continue;
		} 
		break;
	}
	return doubleInput;
}

 string validateString( string& stringInput) {
  while (true) {
     cout << "Enter a word (no spaces): ";
		try {
			stringInput = getValidatedInput< string>();
		}
		catch ( exception e) {
			 cerr << e.what() << " Please enter a word (no spaces).";
       cout <<  endl;			
      continue;
		} 
		break;
	}
	return stringInput;
}
#endif