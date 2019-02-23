/*addition and multiplication of objects in complex class*/
#include<iostream>
using namespace std;
class complex {
	float real;
	float img;
public:
	complex()
	{
		real = img = 0;                  
	}
	complex(float x)
	{
		real = img = x;                  
	}
	complex(float x,float y)
	{
		real = x;
		img = y;
	}
	void display()
	{
		cout << "real=" << real << "img=" << img << endl;
	}
	friend complex add_complex(complex &a, complex &b);   //declaration of friend functions to perform addition n multiplication
	friend complex mul_complex(complex &a, complex &b);
};
complex add_complex(complex &a, complex &b);
complex mul_complex(complex &a, complex &b);
void main()
{
	int x;
	int a, b;
	cin >> a >> b;
	complex c3, c4,c5;
	complex c1(2);
	complex c2(a, b);
	c1.display();
	c2.display();
	c3=add_complex(c1, c2);
	c4=mul_complex(c1, c2);
	cout << "The sum of c1 and c2 is :" << endl;
	c3.display();
	cout << "The product of c1 and c2 is :" << endl;
	c4.display();
	cin >> x;

}
complex add_complex(complex &a, complex &b)
{
	complex temp;
	temp.real = a.real + b.real;
	temp.img= a.img + b.img;
	return temp;
}
complex mul_complex(complex &a, complex &b)
{
	complex temp;
	temp.real = (a.real*b.real) - (a.img*b.img);
	temp.img = (a.real*b.img) + (a.img*b.real);
	return temp;
}