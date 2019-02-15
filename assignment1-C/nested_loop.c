#include <stdio.h>


int main()

{
  int rowno,i,p;

  for(rowno=1;rowno<=5;rowno++)

  {for(i=0;i<(5-rowno);i++)

   printf(" ");

   p=rowno;

   while(p>0)

   {
 printf("%d",p);

     p--;

       if(p==0)

      { p++;

        if(rowno>1)

        {while(rowno>=p)

         p++;

         printf("%d",p);
 
        }
 
      }
   
   }
   
  printf("\n");

  }

return 0;

}