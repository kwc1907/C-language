#include<stdio.h>
int xushu(int m,int n);
int main()
{
	int m,n,count;
	scanf("%d%d",&m,&n);
	count=xushu(m,n);
	printf("%d",count);
}
int xushu(int m,int n)
{
	int i,j,flag=1,count=0;
	for(i=m+1;i<n;i++)
	{
		flag=1;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag=0;
				break;
			}
		}
		if(flag)
		{
			count++;
		}
	}
	return(count);
}































/*
void str(char a[],char c);
int main()
{
	char a[80],c;
	int i;
	gets(a);
	scanf("%c",&c);
	str(a,c);
	puts(a);
}
void str(char a[],char c)
{
	int i,j;
	for(i=0,j=0;a[i]!='\0';i++)
	if(a[i]!=c)
	a[j++]=a[i];
	a[j]='\0';
}

*/
































/*
void sort(int a[],int n);
int main()
{
	int a[5],i;
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	sort(a,5);
	for(i=0;i<5;i++)
	printf("%5d",a[i]);
}
void sort(int a[],int n)
{
	int i,t,j,k;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(a[k]>a[j])
			{
				k=j;
			}
		}
			t=a[i];a[i]=a[k];a[k]=t;
	
	}
}

*/




































/*
{
	int shuzu(int a[],int n);
	int aver,a[5],i;
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	aver=shuzu(a,5);
	printf("%d",aver);
 } 
 int shuzu(int a[],int n)
 {
 	int i,sum=a[0],aver;
 	for(i=1;i<n;i++)
 	{
 		sum+=a[i];
	 }
	 aver=sum/n;
	 return aver;
 }*/
