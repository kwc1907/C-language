#include<stdio.h>
#include<math.h>
int main()
{
		double a,b,c,s,area;
		printf("请输入三角形三边长：");
		scanf("%lf%lf%lf",&a,&b,&c);
		s=(a+b+c)/2;
		area=sqrt(s*(s-a)*(s-b)*s-c);
		printf("三角形面积为：%.2lf",area); 
 } 
