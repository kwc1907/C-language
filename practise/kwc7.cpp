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
	printf("��������Ҫ�µ�����:");
	scanf("%d",&m);
	if(m>n)
	printf("����!\n");
	else if(m<n) printf("С��!\n");
	else 
	{
		printf("��ϲ�㣡�¶���\n");  
		break;
	} }
	printf("��һ������%d��\n",count); 
	if (count<=5) printf("�����Ǹ�С��ţ�");
	else printf("�����Ǹ�Сɵ��"); 
 } 
