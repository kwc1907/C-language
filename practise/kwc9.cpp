#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int m,n,s=0,count;
	for(;;) 
	{
		srand(time(NULL));
		n=rand()%100;
		printf("你一共有十次机会，"); 
		for(count=1;count<=10;count++) 
	{
		printf("请输入你所猜的数字：");
		scanf("%d",&m);	
		if(count==10&&m!=n) {printf("不好意思，你猜错了，请猜下一个数\n");break;}
		else if(count==10&&m==n) {printf("恭喜你，把握住了最后一次机会\n");s=1;break;}
		if(m>n) 
		printf("大了！\n你还有%d次机会\n",10-count);
		else if(m<n)
	 	printf("小了！\n你还有%d次机会\n",10-count);
	 
		else {printf("恭喜你！猜对了。\n");s=1;break;}
		
		
	}
		if(s)
		break;
		else continue;
	}
}
