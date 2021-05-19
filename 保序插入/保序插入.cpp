#include<stdio.h>
int main()
{
	int n,a[6]={12,36,39,59,68},s1,s2,t,i;
	scanf("%d",&n);
	if(n>=a[4])
	a[5]=n;
	else
	{
		for(i=0;i<5;i++)
		if(a[i]>=n)
		{
		s1=a[i];
		t=i; 
		a[t]=n;
		for(i=t;i<6;i++)
		{
			s2=a[i+1];a[i+1]=s1;s1=s2;
			
		}
		break;}
	}
	for(i=0;i<6;i++)
	printf("%-4d",a[i]);
 } 
