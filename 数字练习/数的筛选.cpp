#include<stdio.h>
int main()
{
	 int fun(int *p,int n);
	int i,n,a[25],count=0;
	scanf("%d",&n);
	if(n<=1)
	printf("cuowu");
	else 
	{
	count=fun(a,n);
	printf("%d\n",count);
	for(i=0;i<count;i++)
	printf("%-4d",a[i]);
}
 } 
 int fun(int *p,int n)
 {
 	int i,count=0;
 	for(i=1;i<n;i++)
 	if((i%7==0||i%11==0)&&(i%77!=0))
 	{count++;
 	*p++=i;
	 }
	 return count;
 }

