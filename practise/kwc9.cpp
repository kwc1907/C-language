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
		printf("��һ����ʮ�λ��ᣬ"); 
		for(count=1;count<=10;count++) 
	{
		printf("�����������µ����֣�");
		scanf("%d",&m);	
		if(count==10&&m!=n) {printf("������˼����´��ˣ������һ����\n");break;}
		else if(count==10&&m==n) {printf("��ϲ�㣬����ס�����һ�λ���\n");s=1;break;}
		if(m>n) 
		printf("���ˣ�\n�㻹��%d�λ���\n",10-count);
		else if(m<n)
	 	printf("С�ˣ�\n�㻹��%d�λ���\n",10-count);
	 
		else {printf("��ϲ�㣡�¶��ˡ�\n");s=1;break;}
		
		
	}
		if(s)
		break;
		else continue;
	}
}
