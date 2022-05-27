#pragma once
#include "Array.h"
class Decimal :public Array
{
	char y[100];
	int sign;
public:
	Decimal();
	Decimal(int, char);

	void setY(char);
	int getY(int value) const;

	int Show();
	int SignNum();

	friend int operator+(Decimal&, Decimal&);
	friend int operator-(Decimal&, Decimal&);
	friend int operator*(Decimal&, Decimal&);
	friend double operator/(Decimal&, Decimal&);


	friend bool operator>(Decimal&, Decimal&);
	friend bool operator<(Decimal&, Decimal&);
	friend bool operator==(Decimal&, Decimal&);

	virtual bool rangeÑheck();

	operator string() const;
	friend ostream& operator << (ostream&, const Decimal&);
	friend istream& operator >> (istream&, Decimal&);

};
