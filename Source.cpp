#include <iostream>
#include "Decimal.h"
#include "BitString.h"

int main()
{
    Decimal a;
    cin >> a;
    cout << a << endl;
    cout << "sign num-->" << a.SignNum() << endl;
    cout << "number-->" << a.Show() << endl;
    cout << "_________________________________\n";
    Decimal b;
    cin >> b;
    cout << b << endl;
    cout << "sign num-->" << b.SignNum() << endl;
    cout << "number-->" << b.Show() << endl;
    cout << "_________________________________\n";

    cout << "occurrence of values-->" << b.rangeÑheck() << endl;

    cout << "sum=" << a + b << endl;
    cout << "sub=" << a - b << endl;
    cout << "mult=" << a * b << endl;
    cout << "div=" << a / b << endl;
    cout << "_________________________________\n";

    cout << "less=" << (a < b) << endl;
    cout << "great=" << (a > b) << endl;
    cout << "equal=" << (a == b) << endl;
    cout << "_________________________________\n";


    BitString c;
    BitString d;
    cin >> c; cout << "c:  " << c << endl;
    cin >> d; cout << "d:  " << d << endl;
    cout << "occurrence of values-->" << c.rangeÑheck() << endl;

    cout << "_____________________________\n";
    cout << "c&&d --> " << (c && d) << endl;
    cout << "c||d --> " << (c || d) << endl;
    cout << "c^d --> " << (c ^ d) << endl;
    cout << "!c --> " << !c << endl;
    cout << "c>>2 --> " << (c >> 2) << endl;
    cout << "c<<2 --> " << (c << 2) << endl;

    Array* aa = new Decimal(2, 12);
    cout << typeid(aa).name() << endl;
    cout << typeid(*aa).name() << endl;

    Array* cc = new BitString(4, 1001);
    cout << typeid(cc).name() << endl;
    cout << typeid(*cc).name() << endl;
}
