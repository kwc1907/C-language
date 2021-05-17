#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int a[m][n],i,j;
	for(i=0;i<m;i++)
	{
	a[i][i]=1;a[i][0]=1;}
	for(i=2;i<m;i++)
		for(j=1;j<i;j++)
			a[i][j]=a[i-1][j-1]+a[i-1][j];
	for(i=0;i<m;i++)
	{
		for(j=0;j<i+1;j++)
		{
		printf("%-5d",a[i][j]);}
	printf("\n");
}
 } 
