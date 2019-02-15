#include<stdio.h>
#include<math.h>
void main()
{
 int num, sum = 0, i, d = 0, rem, temp,x,base;
 printf("Enter the binary input\n");
 scanf_s("%d", &num);
 temp = num;
 while (num > 0)
 {
  rem = num % 10;
  num = num / 10;
  d++;
 }
 printf("The no of digits in the binary number is: %d\n", d);
 num = temp;
 base = 1;
 for (i = 0; i < d; i++)
 {
  rem = num % 10;
  sum = sum + rem*base;
  num = num / 10;
  base = base * 2;
 }
 printf("The decimal equivalent is %d\n", sum);
 scanf_s("%d", &x);
}