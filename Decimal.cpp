#include "Decimal.h"
#include <iostream>
#include <sstream>
using namespace std;

Decimal::Decimal() :Array()
{}
Decimal::Decimal(int a, char y) : Array(a)
{
	setY(y);
}
void Decimal::setY(char value)
{
	*y = value;
}
int Decimal::getY(int value) const
{
	return y[value];
}

Decimal::operator string() const
{
	stringstream s;
	int i;
	cout << "vvedit nomer elem masiva-->"; cin >> i;
	if (i < getLen())
	{
		s << "elem #" << i << "-->" << y[i] << endl;
	}
	else
		s << "incorrect data for nomer elem\n";
	return s.str();
}
int operator+(Decimal& a, Decimal& b)
{
	return a.Show() + b.Show();
}
int operator-(Decimal& a, Decimal& b)
{
	return a.Show() - b.Show();
}
int operator*(Decimal& a, Decimal& b)
{
	return a.Show() * b.Show();
}
double operator/(Decimal& a, Decimal& b)
{
	return (1. * a.Show() / b.Show());
}
bool operator>(Decimal& a, Decimal& b)
{
	return (a.Show() > b.Show());
}
bool operator<(Decimal& a, Decimal& b)
{
	return (a.Show() < b.Show());
}
bool operator==(Decimal& a, Decimal& b)
{
	return (a.Show() == b.Show());
}
int Decimal::Show()
{
	int n = atoi(y);
	return n;
}
int Decimal::SignNum()
{
	if (Show() < 0)
		sign = -1;
	if (Show() >= 0)
		sign = 1;
	return sign;
}
bool Decimal::range—heck()
{
	for (int i = 0; i < strlen(y); i++)
	{
		if (y[i] = (1 || 2 || 3 || 4 || 5 || 6 || 7 || 8 || 9 || 0))
			return true;
		else return false;
	}
}

ostream& operator << (ostream& out, const Decimal& r)
{
	out << string(r);
	return out;
}
istream& operator >> (istream& in, Decimal& r)
{
	int len;
	cout << "len massiv--> "; in >> len;
	for (int i = 0; i < len; i++)
	{
		cout << "elem #" << i << "-->";
		in >> r.y[i];
	}
	r.setLen(len);
	return in;
}