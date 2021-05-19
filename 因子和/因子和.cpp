#include<stdio.h>
int zxc(int n);
int main()
{
	int n,sum;
	scanf("%d",&n);
	sum=zxc(n);
	printf("%d",sum);
	
 } 
int zxc(int n)
{
	int sum=0,k,i,j,t=0,a[n];
	a[0]=0;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			a[t++]=i;
			n=n/i;
			i=1; 
			
		}	
	}
	if(t==0)
	a[0]=n+1;
	else
	a[t]=n;
	for(j=0;j<=t;j++)
	sum+=a[j];
	return(sum);
}
