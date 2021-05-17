#include<stdio.h>
int main()
{
	double n,sum=1,i,p=1;
	for(n=1;n<100000;n++)
	{
		i=n/(2*n+1);
		p*=i;
		sum+=p;
	}
	printf("%lf",sum*2);
 } 
