#include<stdio.h>
int main()
{
	int a,b[a],i;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	scanf("%d",&b[i]);
	for(i=0;i<a;i++)
printf("%d\t%d\n",b[i],i);
return 0;
}
