#include<stdio.h>
#include<string.h> 
int main()
{
	void longest(char a[]);
	char a[80];
	gets(a);
	longest(a);
 } 
 void longest(char a[])
 {
 	char b[20],m[20];
 	int max=0,i,j=0;
 	for(i=0;i<=strlen(a);i++)
 	{
 		if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
 		{
 			b[j++]=a[i];
		 }
		 else
		 {
		 	b[j]='\0';
		 	if(j>max)
		 	{
		 		strcpy(m,b);
		 		max=j;
			 }
			 j=0;
		 }
		 
	 }
	 puts(m);
 }
