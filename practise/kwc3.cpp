#include<stdio.h>
int main()
{
	int a,b,c,i;
	for( i=100;i<=999;i++)
	{
		a=i%10;           
		b=i/10%10;		 	
		c=i/100%10;           
		if(i==a*a*a+b*b*b+c*c*c)
		printf("%d\t",i); 
	}
 } 
 #include<stdio.h>
int main()
{
	int a,b,c,i;
	for(i=100;i<1000;i++)
	{
		a=i%10;
		b=i/10%10;
		c=i/100;
		if(i==a*a*a+b*b*b+c*c*c)
		printf("%d\t",i);
	}
}
#include<stdio.h>
int main()
{
	int a,b,c,i;
	for(i=100;i<=999;i++)
	{
	a=i%100;
	b=i/10%10;
	c=i/100;
	if(i==a*a*a+b*b*b+c*c*c)
		printf("%d\t",i);

}
}
