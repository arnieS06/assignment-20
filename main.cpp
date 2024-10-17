// assignment 20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "fillDynamicArray.h"
#include "printSum.h"
using namespace std;


int main() {
	int arraySize = 5;
	int* defaultArray = new int[arraySize];

	int sum = fillDyanmicArray(defaultArray, arraySize);

	printSum(sum);

	delete[] defaultArray;
	defaultArray = nullptr;

	return 0;
}


