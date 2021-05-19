#include<stdio.h>
int main()
{
	char a[30],b[30];
	int i,t=0;
	gets(a);
	gets(b);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!=b[i])
		{
		t=a[i]-b[i];
		break;
	}
	}
	printf("%d",t);
 } 
