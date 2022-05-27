#include "BitString.h"
#include <sstream>
using namespace std;

BitString::BitString() :Array()
{
	setY(0);
}
BitString::BitString(int a, char b) : Array(a)
{
	setY(b);
}

void BitString::setY(char value)
{
	char s[100];
	*s = value;
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == 0 || s[i] == 1)
			*y = value;
		if (!(s[i] == 0 || s[i] == 1))
			cout << "false" << endl; break;
	}
}
int BitString::getY() const
{
	int l = strlen(y);
	int c = 0;
	int count = 1;
	for (int i = l; i > 0; i--, count *= 2)
		if ((y[i - 1] == '1'))
			c += count;
	return c;
}
string operator &&(BitString& a, BitString& b)
{
	string s;
	for (int i = 0; i < strlen(a.y); i++)
	{
		s += '1';
	}
	for (int i = 0; i < strlen(a.y); i++)
	{
		if (a.y[i] == '0' || b.y[i] == '0')
			s[i] = '0';
	}
	return s;
}
string operator ||(BitString& a, BitString& b)
{
	string s;
	for (int i = 0; i < strlen(a.y); i++)
	{
		s += '1';
	}
	for (int i = 0; i < strlen(a.y); i++)
	{
		if (a.y[i] == '0' && b.y[i] == '0')
			s[i] = '0';
	}
	return s;
}
string operator ^(BitString& a, BitString& b)
{
	string s;
	for (int i = 0; i < strlen(a.y); i++)
	{
		s += '1';
	}
	for (int i = 0; i < strlen(a.y); i++)
	{
		if (a.y[i] == b.y[i])
			s[i] = '0';
	}
	return s;
}
string operator !(BitString& a)
{
	string s;
	for (int i = 0; i < strlen(a.y); i++)
	{
		s += '1';
	}
	for (int i = 0; i < strlen(a.y); i++)
	{
		if (a.y[i] == '0')
			s[i] = '1';
		if (a.y[i] == '1')
			s[i] = '0';
	}
	s[0] = '0';
	return s;
}
string operator >>(BitString& a, int b)
{
	string s;
	s = a.y;
	for (int i = 0; i < b; i++)
	{
		s.pop_back();
	}
	return s;
}
string operator <<(BitString& a, int b)
{
	string s = a.y;
	for (int i = 0; i < b; i++)
	{
		s = s + ' ';
		int n = s.length() - 1;
		s[n] = '0';
	}
	return s;
}

bool BitString::rangeÑheck()
{
	for (int i = 0; i < strlen(y); i++)
	{
		if ((y[i] = '0') || (y[i] = '1') || (y[i] = '\0'))
			return 1;
	}
}

BitString::operator string() const
{
	stringstream s;
	int i;
	s << "2th numeric in 10th system-->" << getY() << endl;
	return s.str();
}
ostream& operator << (ostream& out, const BitString& r)
{
	out << string(r);
	return out;
}
istream& operator >> (istream& in, BitString& r)
{
	cout << "input munber in 2th numeric--> "; in >> r.y;
	return in;
}
