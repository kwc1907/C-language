#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int a[m][n],i,j,count=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		count++;
		a[i][j]=count;
		printf("%-3d",a[i][j]);}
		printf("\n"); 
	}
	
 } 
