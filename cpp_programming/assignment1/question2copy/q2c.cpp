#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;
class student {
	char *studentname;
	char grade;
	int marks1;
	int marks2;
	int marks3;
public:
	void setdata()
	{
		char n[20];
		cout << "Enter the student_name" << endl;
		cin >> n;
		studentname= (char *)malloc((sizeof(char)*(strlen(n)+1)));
		strcpy(studentname,n);
		cout << "Enter the marks of students" << endl;
		cin>>marks1;
		cin>>marks2;
		cin>>marks3;
	}
	void display()
	{
		cout << "student name=" << studentname << "marks:" << marks1 << " " << marks2 << " " << marks3 << endl;
	}
	int cal_avg()
	{
		int avg;
		avg = ((marks1 + marks2 + marks3) / 3);
		return avg;
	}
	void compute_grade(int x)
	{
		if (x >= 60)
			cout << "First class" << endl;
		else if (50 <= x < 60)
			cout << "Second class" << endl;
		else if (40 <= x < 50)
			cout << "Third class" << endl;
		else
			cout << "Failed" << endl;
	}
};
void main()
{
	int x, y;
	student s1;
	s1.setdata();
	x = s1.cal_avg();
	s1.compute_grade(x);
	s1.display();
	cin >> y;
}