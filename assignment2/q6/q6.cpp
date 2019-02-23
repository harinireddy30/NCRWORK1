/*Using copy constructor*/

#include<iostream>
using namespace std;
class complex {                                   //creating a complex class
	int real;
	int img;
public:
	complex()
	{
		real = img = 0;                                //default constructor
	}
	complex(int x,int y)
	{
		real = x;
		img = y;                                //parameterized constructor
	}
	complex(const complex &c)
	{
		real = c.real;
		img = c.img;                            //copy constructor
	}
	void display()
	{
		cout << real << "+" << img << "i" << endl;
	}
};
void main()
{
	int x;
	complex c1;
	c1 = complex();                  //creating an object using default constructor
	complex c2, c3;
	c1.display();
	c2 = complex(2, 3);              //creating an object using parameterised constructor
	c2.display();
	c3 = complex(c2);                //c3 object using copy constructor
	c3.display();
	cin >> x;
}