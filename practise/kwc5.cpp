#include<stdio.h> 
int main()
{
	int i,j,m;
	printf("请输入今天的日期：");
	scanf("%d %d %d",&i,&j,&m);
	switch(j)
	{
		case 1: 
			if(m==31)
			{
				j++;
				m=1;
				printf("%d,%d,%d",i,j,m);
			}
			else
			{
				m++;
				printf("%d,%d,%d",i,j,m);
			}
			break;
		case 2:
			if(i%4==0&&i%100!=0||i%400==0)
			{ 
			if(m==29)
			{
				j++;
				m=1;
				printf("%d,%d,%d",i,j,m);
			}
			else
			{
				m++;
				printf("%d,%d,%d",i,j,m);
			}
			}
			else if(m==28)
			{
				j++;
				m=1;
				printf("%d,%d,%d",i,j,m);	
			}
			break;
		case 3:
			if(m==31)
			{
				j++;
				m=1;
				printf("%d,%d,%d",i,j,m);
			}
			else
			{
				m++;
				printf("%d,%d,%d",i,j,m);
			}
			break;
		case 4:
			if(m==31)
			{
				j++;
				m=1;
				printf("%d,%d,%d",i,j,m);
			}
			else
			{
				m++;
				printf("%d,%d,%d",i,j,m);
			}
			break;
		case 5:
			if(m==31)
			{
				j++;
				m=1;
				printf("%d,%d,%d",i,j,m);
			}
			else
			{
				m++;
				printf("%d,%d,%d",i,j,m);
			}
			break;
		case 6:
			if(m==30)
			{
				j++;
				m=1;
				printf("%d,%d,%d",i,j,m);
			}
			else
			{
				m++;
				printf("%d,%d,%d",i,j,m);
			}
			break;
		case 7:
			if(m==31)
			{
				j++;
				m=1;
				printf("%d,%d,%d",i,j,m);
			}
			else
			{
				m++;
				printf("%d,%d,%d",i,j,m);
			}
			break;
		case 8:
			if(m==31)
			{
				j++;
				m=1;
				printf("%d,%d,%d",i,j,m);
			}
			else
			{
				m++;
				printf("%d,%d,%d",i,j,m);
			}
			break;
		case 9:
			if(m==30)
			{
				j++;
				m=1;
				printf("%d,%d,%d",i,j,m);
			}
			else
			{
				m++;
				printf("%d,%d,%d",i,j,m);
			}
			break;
		case 10:
			if(m==31)
			{
				j++;
				m=1;
				printf("%d,%d,%d",i,j,m);
			}
			else
			{
				m++;
				printf("%d,%d,%d",i,j,m);
			}
			break;
		case 11:
			if(m==31)
			{
				j++;
				m=1;
				printf("%d,%d,%d",i,j,m);
			}
			else
			{
				m++;
				printf("%d,%d,%d",i,j,m);
			}
			break;
		case 12:
			if(m==31)
			{
				i++;
				j=1;
				m=1;
				printf("%d,%d,%d",i,j,m);
			}
			else
			{
				m++;
				printf("%d,%d,%d",i,j,m);
			}
			break;
		default:
			printf("unknown operator!");
    }
 } 
