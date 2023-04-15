#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <random>
#include <algorithm>
#include <fstream>
#include <Windows.h>
#include <vector>
#include <cstring>
#include <cctype>
using namespace std;

// Ends program
int endProgram() {
	cout << "\n\nPress enter to exit" << endl;
	cin.ignore(100, '\n');
	cin.get();
	return 0;
}

// Validates Integer in a range
int validateInteger(string prompt, int min, int max) {
	int userNumber = 0;
	cout << prompt;
	while (!(cin >> userNumber) || cin.fail() || userNumber < min || userNumber>max) {
		cout << "ERROR:  Invalid entry.  " << prompt << endl;
		cin.clear();
		cin.sync();
		cin.ignore(100, '\n');
	}
	return userNumber;
}

int validateInteger(string prompt, int min) {
	int userNumber = 0;
	cout << prompt;
	while (!(cin >> userNumber) || cin.fail() || userNumber < min) {
		cout << "ERROR:  Invalid entry.  " << prompt << endl;
		cin.clear();
		cin.sync();
		cin.ignore(100, '\n');
	}
	return userNumber;
}
// Validates Integer
int validateInteger(string prompt) {
	int userNumber = 0;
	cout << prompt;
	while (!(cin >> userNumber) || cin.fail()) {
		cout << "ERROR:  Invalid entry.  " << prompt << endl;
		cin.clear();
		cin.sync();
		cin.ignore(100, '\n');
	}
	return userNumber;

}

// Validates a yes or a no and returns that character
char validateYesNo(string prompt)
{
	char yesNo;
	bool fail;
	cout << prompt;

	do
	{
		fail = false;
		cin >> yesNo;
		yesNo = tolower(yesNo);

		if (((int)yesNo != 121 && (int)yesNo != 110) || cin.fail()) {
			fail = true;
			cout << "ERROR:  Invalid entry.  " << prompt << endl;
			cin.clear();
			cin.sync();
			cin.ignore(100, '\n');
		}
		else fail = false;
	} while (fail);
	return yesNo;

}

// Generates random number
int randomNumber(int range_from, int range_to)
{
	std::random_device rand_dev;
	std::mt19937 generator(rand_dev());
	std::uniform_int_distribution<int> distr(range_from, range_to);
	return distr(generator);
}

// Will still get char if user types in an acceptable letter and then other letters
// Also this is case sensitive
char validateChar(string prompt, char min, char max)
{
	char Character;
	cout << prompt;
	while (!(cin >> Character) || cin.fail() || int(Character) < int(min) || int(Character) > int(max)) {
		cout << "ERROR:  Invalid entry.  " << prompt << endl;
		cin.clear();
		cin.sync();
		cin.ignore(100, '\n');
	}
	return Character;

}


// I don't know how to validate the length of a float but besides that this works
// User can't input an integer it must be a decimal type number
float validateMustFloat(string prompt) {
	float userNumber = 0;
	cout << prompt;
	while (!(cin >> userNumber) || cin.fail() || userNumber == int(userNumber)) {
		cout << "ERROR:  Invalid entry.  " << prompt << endl;
		cin.clear();
		cin.sync();
		cin.ignore(100, '\n');
	}
	return userNumber;
}
// can be integers and floats and accepts a range
float validateIntFloat(string prompt, float min, float max) {
	float userNumber = 0;
	cout << prompt;
	while (!(cin >> userNumber) || cin.fail() || userNumber < min || userNumber>max) {
		cout << "ERROR:  Invalid entry.  " << prompt << endl;
		cin.clear();
		cin.sync();
		cin.ignore(100, '\n');
	}
	return userNumber;
}



// Can be integers and floats
float validateIntFloat(string prompt) {
	float userNumber = 0;
	cout << prompt;
	while (!(cin >> userNumber) || cin.fail()) {
		cout << "ERROR:  Invalid entry.  " << prompt << endl;
		cin.clear();
		cin.sync();
		cin.ignore(100, '\n');
	}
	return userNumber;
}

float validateIntFloat(string prompt, float min) {
	float userNumber = 0;
	cout << prompt;
	while (!(cin >> userNumber) || cin.fail() || userNumber < min) {
		cout << "ERROR:  Invalid entry.  " << prompt << endl;
		cin.clear();
		cin.sync();
		cin.ignore(100, '\n');
	}
	return userNumber;
}
// Validates a double
double validateDouble(string prompt) {
	double userNumber = 0.0;
	cout << prompt;
	while (!(cin >> userNumber) || cin.fail() || userNumber == int(userNumber)) {
		cout << "ERROR:  Invalid entry.  " << prompt << endl;
		cin.clear();
		cin.sync();
		cin.ignore(100, '\n');
	}
	return userNumber;
}

// ************************** LINEAR SEARCHES **************************

int LinearSearch(const int array[], int size, int value) {
	int index = 0;
	int position = -1;
	bool found = false;

	while (index < size && !found)
	{
		if (array[index] == value)
		{
			found = true;
			position = index;
		}
		index++;
	}
	return position;
}

int LinearSearch(const float array[], int size, float value) {
	int index = 0;
	int position = -1;
	bool found = false;

	while (index < size && !found)
	{
		if (array[index] == value)
		{
			found = true;
			position = index;
		}
		index++;
	}
	return position;
}

// A variation of linear search that searches for strings
int strLinearSearch(const string array[], int size, string value) {
	int index = 0;
	int position = -1;
	bool found = false;

	while (index < size && !found)
	{
		if (array[index].compare(value) == 0)
		{
			found = true;
			position = index;
		}
		index++;
	}
	return position;
}

// ************************** SELECTION SORTS **************************

void decSelectionSort(int array[], int size) {

	int maxIndex;
	int maxValue;

	for (int start = 0; start < (size - 1); start++)
	{
		maxIndex = start;
		maxValue = array[start];

		for (int index = start + 1; index < size; index++)
		{
			if (array[index] > maxValue)
			{
				maxValue = array[index];
				maxIndex = index;
			}
		}
		swap(array[maxIndex], array[start]);
	}
}

void decSelectionSort(float array[], int size) {

	int maxIndex;
	float maxValue;

	for (int start = 0; start < (size - 1); start++)
	{
		maxIndex = start;
		maxValue = array[start];

		for (int index = start + 1; index < size; index++)
		{
			if (array[index] > maxValue)
			{
				maxValue = array[index];
				maxIndex = index;
			}
		}
		swap(array[maxIndex], array[start]);
	}
}



void ascSelectionSort(int array[], int size) {

	int maxIndex;
	int maxValue;

	for (int start = 0; start < (size - 1); start++)
	{
		maxIndex = start;
		maxValue = array[start];

		for (int index = start + 1; index < size; index++)
		{
			if (array[index] < maxValue)
			{
				maxValue = array[index];
				maxIndex = index;
			}
		}
		swap(array[maxIndex], array[start]);
	}
}

void ascSelectionSort(float array[], int size) {

	int maxIndex;
	float maxValue;

	for (int start = 0; start < (size - 1); start++)
	{
		maxIndex = start;
		maxValue = array[start];

		for (int index = start + 1; index < size; index++)
		{
			if (array[index] < maxValue)
			{
				maxValue = array[index];
				maxIndex = index;
			}
		}
		swap(array[maxIndex], array[start]);
	}
}
