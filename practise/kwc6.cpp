#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int m,n;
	srand(time(NULL));
	n=rand()%100;
	printf("请输入你猜的数字:");
	scanf("%d",&m); 
	if(m==n) printf("恭喜你！猜对了。");
	else
	
	 printf("你猜错了！over.\t正确的是%d",n); 
 } 
