#include<iostream>
using namespace std;
class employee {
	char name[10];
	int rollno;
	int salary;
public:
	void input_data()
	{
		cin >> name;
		cin >> rollno;
		cin >> salary;
	}
	friend ostream& operator<<(ostream &output, employee &e);
};
ostream& operator<<(ostream &output, employee &e)
{
	cout << "Name:" << e.name << " Rollno:" << e.rollno << " Salary:" << e.salary << endl;
	return cout;
}
void main()
{
	int x, i;
	employee e1[5];
	for (i = 0; i < 5; i++)
	{
		e1[i].input_data();
		cout << "The details are:" << e1[i]<< endl;
	}
	cin >> x;
}