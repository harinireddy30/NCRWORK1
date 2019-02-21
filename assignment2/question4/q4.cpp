#include<iostream>
using namespace std;
class complex {
	int real;
	int img;
public:
	complex()
	{
		real = img = 0;
	}
	complex(int x, int y)
	{
		real = x;
		img = y;
	}
	complex(const complex &x)
	{
		real = x.real;
		img = x.img;
	}
	complex operator+(complex c)
	{
		complex res;
		res.real = real + c.real;
		res.img = img + c.img;
		return(res);
	}
	complex operator-(complex c)
	{
		complex res;
		res.real = real - c.real;
		res.img = img - c.img;
		return (res);
	}
	complex operator++(int x)
	{
		complex temp;
		temp.real = real++;
		temp.img = img++;
		return temp;
	}
	complex operator++()
	{
		complex temp;
		temp.real = ++real;
		temp.img = ++img;
		return temp;
	}
	complex operator--()
	{
		complex temp;
		temp.real = --real;
		temp.img = --img;
		return (temp);
	}
	complex operator,(complex c)
	{
		return (c);
	}
	complex *operator->()
	{
		return(this);
	}
	friend ostream& operator<<(ostream &cout, complex c);
};
ostream& operator<<(ostream &cout,complex c) 
{
	if (c.img < 0)
		cout << c.real << "-" << "i" << c.img << endl;
	else
		cout << c.real << "+"<<"i" << c.img << endl;
	return cout;
}
void main()
{
	int y;
	complex c1, c2, c3, c4, c5, c6, c7, c8;
	c1 = complex();
	c2 = complex(4, 5);
	cout << "c1=";
	cout << c1 << endl;
	cout << "c2=";
	cout << c2 << endl;
	c3 = c1 + c2;
	cout << "c3=" << c3 << endl;
	c4 = c1 - c2;
	cout << "c4=" << c4 << endl;
	c5 = ++c1;
	c6 = c1++;
	cout << " c5=" << c5 << endl;
	cout << " c6=" << c6 << endl;
	c7 = c5, c6;
	cout << " c7=" << c7 << endl;
	c8=--c7;
	cout << "c8 is after post-decrement=" << c7 << endl;
	cin >> y;
}