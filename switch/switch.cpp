#include<stdio.h>
int main()
{
	enum color{red,yellow,blue,white,black};
	enum color i,j,k,pri;
	int n=0,t;
	for(i=red;i<=black;i++)
	{
		for(j=red;j<=black;j++)
		{
			if(j!=i)
			{
				for(k=red;k<=black;k++)
				{
					if(k!=j&&k!=i)
					{
						n++;
						for(t=1;t<=3;t++)
						{
							switch(t)
							{
								case 1:pri=i;break;
								case 2:pri=j;break;
								case 3:pri=k;break;
							}
							switch(pri)
							{
								case red:printf("%s\t","red");break;
								case yellow:printf("%s\t","yellow");break;
								case blue:printf("%s\t","blue");break;
								case white:printf("%s\t","white");break;
								case black:printf("%s\t","black");break;
							}
						}
						printf("\n"); 
					}
				}
			}
		}
	}
	printf("%d",n);
 } 
































/*
{
	char a[80];
	gets(a);
	int b[50],j=0,i,t=0,m,e,k;
	for(i=0;i<=strlen(a);i++)
	{
		if(a[i]>='0'&&a[i]<='9')
		t++;
		else if(t>0)
		{
			e=1;
			m=a[i-1]-48;
			for(k=1;k<t;k++)
			{
			e*=10;
			m+=(a[i-1-k]-48)*e;}
			t=0;
			b[j++]=m;
			m=0;
		}
		
	}
	for(i=0;i<j;i++)
	printf("%d\t",b[i]);
}*/






























/*
{
	void move(int a[],int m);
	int m,a[6],i;
	for(i=0;i<6;i++)
	scanf("%d",&a[i]);
	scanf("%d",&m);
	move(a,m);
	for(i=0;i<6;i++)
	printf("%d\t",a[i]);
 } 
void move(int a[],int m)
{
	int *p,end;
	end=*(a+5);
	for(p=a+5;p>a;p--)
	*p=*(p-1);
	*p=end;
	m--;
	if(m>0) move(a,m);	
}*/
