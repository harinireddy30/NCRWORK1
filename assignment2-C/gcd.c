#include <stdio.h>

#include<math.h>

int gcd(int,int);

int main()

{
   int a,b,x;

    printf("enter the numbers\n");

    scanf("%d %d",&a,&b);
 
    x=gcd(a,b);
    
    printf("the gcd is %d",x);
 
    return 0;

}

int gcd(int a,int b)

{
 if(a==0)
   
  return b;
    
  else if(b==0)
 
  return a;
    
  else if(a>b)
   
  return gcd(a-b,b);

  else if(a<b)
  
  return gcd(a,b-a);

}