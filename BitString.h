#pragma once
#include "Array.h"
#include <iostream>
using namespace std;

class BitString :public Array
{
	char y[100];
public:
	BitString();
	BitString(int, char);

	friend string operator &&(BitString&, BitString&);
	friend string operator ||(BitString&, BitString&);
	friend string operator ^(BitString&, BitString&);
	friend string operator !(BitString&);

	friend string operator>>(BitString&, int);
	friend string operator<<(BitString&, int);

	void setY(char value);
	int getY() const;

	virtual bool rangeÑheck();

	operator string() const;
	friend ostream& operator << (ostream&, const BitString&);
	friend istream& operator >> (istream&, BitString&);
};
