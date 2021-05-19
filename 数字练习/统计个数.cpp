#include<stdio.h>
int main()
{
	int m=0,i,count=0;
	char c,a[80];
	gets(a);
	for(i=0;(c=a[i])!='\0';i++)
	{
		if(c==' ')m=0;
		else if(m==0)
		{
			m=1;
			count++;
		}
	}
	printf("%d",count);
 } 
