#include<stdio.h>
void main()
{
 int num, n,d=0,rem,temp,a[20],i,x,j;
 printf("Enter the hexadecimal number\n");
 scanf_s("%x",&num);
 printf("%d", num);
 temp = num;
 num = temp;
 i = 0;
 while(num>0)
 {
  rem = num %2;
  a[i] = rem;
  num = num / 2;
  i++;
 }
 printf("The binary value is \n");
 for (j = (i-1); j >=0; j--)
  printf("%d", a[j]);
 scanf_s("%d", &x);
}