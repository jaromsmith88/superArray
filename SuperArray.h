// File: SuperArray
// Created by Hugo Valle on 10/31/2017.
// Copyright (c) 2017 WSU
//

#ifndef HW6_SUPERARRAY_H
#define HW6_SUPERARRAY_H
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class SuperArray
{
private:
	int *arr;		// int pointer for you array
	int lowIndex;	// low index (user's view)
	int highIndex;	// high index (user's view)
	int capacity;	// array capacity

public:
	//class OptIndexEx{};		// Exception class for operator
	SuperArray(const int begIndex, const unsigned int capacity);
	virtual ~SuperArray(); /* destructor */


	int &operator[](const int index);
	friend string arrayToString(const SuperArray& s);
};


#endif //HW6_SUPERARRAY_H
