#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int m,n,count;
	srand(time(NULL));
	n=rand()%100;
	printf("你一共有十次机会,数字范围为0~100，"); 
	for(count=1;count<=10;count++) 
	{
	printf("请输入你所猜的数字：");
	scanf("%d",&m);	
	if(count==10&&m!=n) {printf("不好意思，你猜错了。你已经没有机会了。\n");break;}
		else if(count==10&&m==n) {printf("恭喜你！把握住了最后一次机会。猜对了！\n");break;}
	if(m>n) 
	printf("大了！\n你还有%d次机会\t",10-count);
	else if(m<n)
	 printf("小了！\n你还有%d次机会\t",10-count);
	else {
	printf("恭喜你！猜对了。\n");break;}
	
}

}
