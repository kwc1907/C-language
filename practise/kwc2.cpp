#include<stdio.h>
#include<math.h>
int main()
{
		double a,b,c,s,area;
		printf("���������������߳���");
		scanf("%lf%lf%lf",&a,&b,&c);
		s=(a+b+c)/2;
		area=sqrt(s*(s-a)*(s-b)*s-c);
		printf("���������Ϊ��%.2lf",area); 
 } 
