#include<stdio.h>
int add(int, int);
int sub(int, int);
long int mul(int, int);
float div(int, int);
int res1=-1;
long int res2 = -1;
float res3 = -1;
int main()
{
	int a=20,b=10,q;
	res1=add(a,b);
	printf("sum=%d",res1);
	res1=sub(a,b);
	printf("difference=%d",res1);
	res2=mul(a,b);
	printf("product=%ld",res2);
	res3=div(a,b);
	printf("quotient=%f",res3);
	printf("enter a number to exit\n");
	scanf_s("%d",&q);
	return 0;
}

int add(int a,int b)
{
	extern int res1;
	res1=a+b;
	return res1;
}

int sub(int a,int b)
{
	extern int res1;
	res1=a-b;
	return res1;
}

long int mul(int a,int b)
{
	extern int res2;
	res2=a*b;
	return res2;
}

float div(int a,int b)
{
	extern int res3;
	res3=a/b;
	return res3;
}
