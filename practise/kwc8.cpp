#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int m,n,count;
	srand(time(NULL));
	n=rand()%100;
	printf("��һ����ʮ�λ���,���ַ�ΧΪ0~100��"); 
	for(count=1;count<=10;count++) 
	{
	printf("�����������µ����֣�");
	scanf("%d",&m);	
	if(count==10&&m!=n) {printf("������˼����´��ˡ����Ѿ�û�л����ˡ�\n");break;}
		else if(count==10&&m==n) {printf("��ϲ�㣡����ס�����һ�λ��ᡣ�¶��ˣ�\n");break;}
	if(m>n) 
	printf("���ˣ�\n�㻹��%d�λ���\t",10-count);
	else if(m<n)
	 printf("С�ˣ�\n�㻹��%d�λ���\t",10-count);
	else {
	printf("��ϲ�㣡�¶��ˡ�\n");break;}
	
}

}
