#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int a[m][n],i,j,count=1;
	for(i=0;i<m;i++)
	for(j=0;j<i+1;j++)
	{
	a[i][j]=count;count++;}
	 for(i=0;i<m;i++)
	{
	for(j=0;j<i+1;j++)
	{
	printf("%-3d",a[i][j]);}
	printf("\n");
	}
 } 
