#include<stdio.h>
int main()
{
		double r=1.4;
		double zc,mj,bmj,tj;
		double p=3.14;
		zc=2*p*r;
		mj=p*r*r;
		bmj=4*p*r*r;
		tj=4/3*p*r*r*r;
		printf("圆的周长：%.2lf\t\t圆的面积：%.2lf\n球的表面积：%.2lf\t球的体积：%.2lf\n",zc,mj,bmj,tj);
		 
 } 
