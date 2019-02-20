#include<iostream>
using namespace std;
class polar {
	int x;
	static int count;
public:
	void c()
	{
		x=++count;
	}
	void objno()
	{
		cout << "The object number is" << x << endl;
	}
	static void display()
	{
		cout << "The no of objects created is" << count << endl;
	}
};
int polar::count;
void main()
{
	int y;
	polar p1, p2;
	p1.c();
	p2.c(); 
	polar::display;
	p1.objno();
	p2.objno();
	cin >> y;
}