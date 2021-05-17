#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *p;
	char a[10],ch;
	scanf("%s",a);
	if((p=fopen(a,"w"))==NULL)
	{
		printf("wufadakai");
		exit(0);
	}
	ch=getchar();
	ch=getchar();
	while(ch!='#')
	{
		fputc(ch,p);
		putchar(ch);
		ch=getchar;
	}
	fclose(p);
	
 } 
