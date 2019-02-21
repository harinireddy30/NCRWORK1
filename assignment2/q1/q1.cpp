#include<iostream>
using namespace std;
class polar {
	int r;
	int angle;
	static int count;
public:
	polar()
	{
		r = angle = 0;
	}
	polar(int x, int y)
	{
		r = x;
		angle = y;
	}
	static int get_count()
	{
		return count;
	}
	static void inc_count()
	{
		++count;
	}
};
int polar::count;
void main()
{
	int y;
	polar p1,p2;
	p1=polar();
	p2=polar(1, 2);
	p1.inc_count();
	p2.inc_count();
	cout << polar::get_count() << endl;
	cin >> y;
}