#include<stdio.h>
#include<string.h>
#include<stdlib.h> 
#define n 10
int l;
struct people    //������ֽṹ�� 
{
	int num;
	char name[20];
	int score[5];
	float aver;  //ƽ���� 
	int total;   //�ܷ� 
}a[n];
void input()   //������ֵ���Ϣ 
{
	printf("�������������(ע���������С��10):");//����������� 
	scanf("%d",&l);
	while(1)
	{if(l>=10||l<=0)
	{printf("���������������,����������(ע���������С��10)��"); 
	scanf("%d",&l);} 
	else break;}
	int i;
	for(i=0;i<l;i++)
	{
		printf("�������%d��ѡ�ֵ���Ϣ",i+1);
		printf("\n");
		printf("��ţ�");
		scanf("%d",&a[i].num);
		printf("������");
		scanf("%s",a[i].name);	
	}		
}
void dafen()  // ��ί��� 
{
	void average(struct people a[]);
	int i,j;
	for(i=0;i<l;i++)
	{
		printf("��%dλ���֣�",i+1);
		printf("\n");
		for(j=0;j<5;j++)
		{
			printf("�������%dλ��ί�Ĵ�֣�",j+1);
			scanf("%d",&a[i].score[j]); 
		}
	}
	average(a);
}
void average(struct people a[])
{
	int i,add,j,max,min;
	for(i=0;i<l;i++)
	{
		add=0;
		max=min=a[i].score[0];
		for(j=0;j<5;j++)
		{
			add+=a[i].score[j];
			if(a[i].score[j]>=max)
			max=a[i].score[j];     //ѡ����߷� 
			else if(a[i].score[j]<min)
			min=a[i].score[j]; //ѡ����ͷ� 
		}
		a[i].total=add;
		a[i].aver=(add-max-min)/8.0; //���ƽ���ɼ� 
	}
}
void sort(struct people a[])     //����ƽ�������� 
{
	printf("�������:");
	printf("\n");
	int i,j;
	struct people t;
	for(i=0;i<l-1;i++)
	for(j=0;j<l-1-i;j++)
	{
		if(a[j].aver<a[j+1].aver)
		{
			t=a[j];a[j]=a[j+1];a[j+1]=t;
		}
	}
	for(i=0;i<l;i++)
	printf("%d\t%s\t%.2lf\t%d\n",a[i].num,a[i].name,a[i].aver,a[i].total);
}
void search(struct people a[]) //��ѯ������Ϣ 
{
	char b[20];
	printf("������Ҫ��ѯ��������:");
	scanf("%s",b);
	int i,j,flag=1;
	for(i=0;i<l;i++)
	{
		if(strcmp(a[i].name,b)==0)  //���������Ϣ 
		{
			printf("�ø��ֱ����:%d",a[i].num);  
			printf("\n");
			printf("�ø��ֳɼ���:");
			for(j=0;j<5;j++)
			{
			printf("%4d",a[i].score[j]);} 
			printf("\n");
			printf("�ø����ܳɼ���:%d\n",a[i].total);
			printf("�ø���ƽ���ɼ���:%.2lf\n",a[i].aver);
			flag=0;
			break;
		}	
	}
	if(flag)    
	printf("δ�ҵ��ø���\n"); 
}
void inist(struct people a[])  //��������������Ϣ 
{
	int i,max,min;
	l=l+1; 
	printf("������ѡ�ֱ��:");  //�����������ֵĻ�����Ϣ 
	scanf("%d",&a[l-1].num);
	printf("������ѡ������:");
	scanf("%s",a[l-1].name);
	for(i=0;i<5;i++)
	{
	printf("�������%dλ��ί�Ĵ��:",i+1);
	scanf("%d",&a[l-1].score[i]);}
	max=min=a[l-1].score[0];
	a[l-1].total=0;
	for(i=0;i<5;i++)
	{
		a[l-1].total+=a[l-1].score[i];  
		if(a[l-1].score[i]>=max)
		max=a[l-1].score[i];
		else if(a[l-1].score[i]<min)
		min=a[l-1].score[i];
	}
	a[l-1].aver=(a[l-1].total-min-max)/8.0;
	}
void wenjian(struct people a[]) //����������д��ϵͳ�ļ� 
{
	FILE*fp;
	int i;
	if((fp=fopen("D:\\���ֱ�������.txt","w"))==NULL)
	{
		printf("�޷��򿪴��ļ�");
		exit(0); 
	}
	for(i=0;i<l;i++)
	{
		fprintf(fp,"%d\t%s\t%.2lf\t%d\n",a[i].num,a[i].name,a[i].aver,a[i].total);
	}
	fclose(fp);
	printf("����������д��ϵͳ�ļ�\n"); 
}
void delet(struct people a[])
{
	int i,t,m;
	printf("������Ҫɾ�����ֱ�ţ�");
	scanf("%d",&t);
	for(i=0;i<l;i++)
	{
		if(t==a[i].num)
		{
			m=i;
			break;
		}
	}
	for(i=m;i<l;i++)
	a[i]=a[i+1];
	l--;
}
void xiugai(struct people a[])
{
	int i,m,t,j,max,min;
	char b[20];
	printf("������Ҫ�޸ĸ��ֵı��:");
	scanf("%d",&m);
	for(i=0;i<l;i++)
	if(a[i].num==m)
	t=i;
	printf("�������������:");
	scanf("%s",a[t].name); 
	for(j=0;j<5;j++)
		{
			printf("�������%dλ��ί�Ĵ�֣�",j+1);
			scanf("%d",&a[t].score[j]); 
		}
	max=min=a[t].score[0];
	a[t].total=0;
	for(i=0;i<5;i++)
	{
		a[t].total+=a[t].score[i];  
		if(a[t].score[i]>=max)
		max=a[t].score[i];
		else if(a[t].score[i]<min)
		min=a[t].score[i];
	}
	a[t].aver=(a[t].total-min-max)/8.0;
	}	
	 

void show()     //����˵� 
{
	int k;
	char i[10];
	do{
	
	printf("\t1.���������Ϣ\n");
	printf("\t2.������ί���\n");
	printf("\t3.���ɼ�����\n");
	printf("\t4.����������\n");
	printf("\t5.Ҫɾ���ĸ�����Ϣ\n"); 
	printf("\t6.Ҫ�޸ĸ�����Ϣ\n");
	printf("\t7.����ѡ������\n");
	printf("\t8.д�������ļ�\n");
	printf("\t9.�˳�ϵͳ\n");
	printf("****************************************");
	printf("\n");
	printf("��ѡ��(1-9):");
	scanf("%d",&k);
	while(1)
	{if(k>9||k<=0)
	{
	printf("������󣡣�������������:");
	scanf("%d",&k);}
	else break;} 
	switch(k)
	{
		case 1:input();break;
		case 2:dafen();break;
		case 3:sort(a);break;
		case 4:search(a);break;
		case 5:delet(a);break;
		case 6:xiugai(a);break;
		case 7:inist(a);break;
		case 8:wenjian(a);break;
		
		
	}
	if(k!=9)
	{
	printf("����������������⣬����˳���������0��");
	scanf("%s",i);
	if(i==0)
	k=9;
	printf("\n");}
}
while(k!=9);
}
int main()     //������ 
{
	printf("---------------------------------------\n");
	printf("\t��ӭʹ�ø�������ϵͳ\n");
	printf("---------------------------------------\n");
	show();
}
