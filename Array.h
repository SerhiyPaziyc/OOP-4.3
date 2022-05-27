#pragma once
#include <iostream>
using namespace std;
class Array
{
	int len;
	int* x;
public:
	Array() :x(), len(0) {};
	Array(int a) :len(a) {};

	void setX(char value) { x[0] = value; }
	int getX() const { return x[0]; }
	void setLen(int value)
	{
		if (value > 0) {
			len = value;
			if (len <= 0)
				cout << "incorrect data for len" << endl;
		}
	}
	int getLen() const { return len; }

	virtual bool rangeÑheck() = 0;

	int operator[](int l) { return x[l]; };
};
