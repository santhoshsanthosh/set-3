#include<stdio.h>
int main()
{
  unsigned long int n, e1,e2,e3;
  int counter;
  for(counter=0; counter<10; counter++)
    {
    scanf("%ld",&n); // how to restrict this between 1 to 10,000,000,000?
     e1=n/2;
     e2=n/3;
     e3=n/4;
      if(e1+e2+e3<n)
        {
          printf("%ld\n",n);
        }
        else
         printf("%ld\n",e1+e2+e3);
         }
         return 0;
         }
