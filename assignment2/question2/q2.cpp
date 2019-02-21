#include<iostream>
using namespace std;
class student
{
	char *name;
	int roll_no;
	int marks1;
	int marks2;
	int marks3;
	int total;
public:
	void set_data(char *ptr, int r, int m1, int m2, int m3)
	{
		name = new char[strlen(ptr) + 1];
		strcpy(name, ptr);
		roll_no = r;
		marks1 = m1;
		marks2 = m2;
		marks3 = m3;
		total = (m1 + m2 + m3) / 3;
	}
	friend ostream& operator<<(ostream& out, student s)
	{
		out << "Studentname:" << s.name << " Rollno" << s.roll_no << " marks1=" << s.marks1 << " marks2=" << s.marks2 << " marks3=" << s.marks3 << " Total=" << s.total << endl;
		return out;
	}
	void generate_results(student s[], int n)
	{
		int i;
		for (i = 0; i < n; i++)
			cout << s[i];
	}
};