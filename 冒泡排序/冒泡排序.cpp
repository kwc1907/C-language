#include<stdio.h>
int main()
{
	int a[5],i,j,t;
	printf("���������֣�");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	for(j=0;j<4;j++)
	for(i=0;i<4-j;i++)
	if(a[i]>=a[i+1])
	{
	t=a[i];a[i]=a[i+1];a[i+1]=t;
	}
	for(i=0;i<5;i++)
	printf("%5d",a[i]);
	 
}
