#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int m,n;
	srand(time(NULL));
	n=rand()%100;
	printf("��������µ�����:");
	scanf("%d",&m); 
	if(m==n) printf("��ϲ�㣡�¶��ˡ�");
	else
	
	 printf("��´��ˣ�over.\t��ȷ����%d",n); 
 } 
