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
	~complex()
	{
		cout << "destructor called" << endl;
	}
};
ostream& operator<<(ostream &cout,complex c) {
	if (c.img < 0)
		cout << c.real << "-" << "i" << c.img << endl;
	else
		cout << c.real << "i" << c.img << endl;
	return cout;
}
void main()
{
	int y;
	complex c4;
	complex c1();
	cout << c1;
	complex c2(2, 3);
	cout<<c2;
	complex c3(c2);
	cout << c3;
	c4=c3++;
	cout << c3;
	complex c5 = c3 - c2;
	cout << c5;
	c5 = c3 + c2;
	cout << c5;
	cin >> y;
}
