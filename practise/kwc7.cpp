#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int m,n,count=1;
	srand(time(NULL));
	n=rand()%100;
	for(;;count++)
	{
	printf("请输入你要猜的数字:");
	scanf("%d",&m);
	if(m>n)
	printf("大了!\n");
	else if(m<n) printf("小了!\n");
	else 
	{
		printf("恭喜你！猜对了\n");  
		break;
	} }
	printf("你一共猜了%d次\n",count); 
	if (count<=5) printf("你真是个小天才！");
	else printf("你真是个小傻瓜"); 
 } 
