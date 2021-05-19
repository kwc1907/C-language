#include<stdio.h>
#include<string.h>
#include<stdlib.h> 
#define n 10
int l;
struct people    //定义歌手结构体 
{
	int num;
	char name[20];
	int score[5];
	float aver;  //平均分 
	int total;   //总分 
}a[n];
void input()   //输入歌手的信息 
{
	printf("请输入歌手人数(注意歌手人数小于10):");//输入歌手人数 
	scanf("%d",&l);
	while(1)
	{if(l>=10||l<=0)
	{printf("歌手人数输入错误,请重新输入(注意歌手人数小于10)："); 
	scanf("%d",&l);} 
	else break;}
	int i;
	for(i=0;i<l;i++)
	{
		printf("请输入第%d个选手的信息",i+1);
		printf("\n");
		printf("编号：");
		scanf("%d",&a[i].num);
		printf("姓名：");
		scanf("%s",a[i].name);	
	}		
}
void dafen()  // 评委打分 
{
	void average(struct people a[]);
	int i,j;
	for(i=0;i<l;i++)
	{
		printf("第%d位歌手：",i+1);
		printf("\n");
		for(j=0;j<5;j++)
		{
			printf("请输入第%d位评委的打分：",j+1);
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
			max=a[i].score[j];     //选出最高分 
			else if(a[i].score[j]<min)
			min=a[i].score[j]; //选出最低分 
		}
		a[i].total=add;
		a[i].aver=(add-max-min)/8.0; //求出平均成绩 
	}
}
void sort(struct people a[])     //根据平均分排序 
{
	printf("排序后结果:");
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
void search(struct people a[]) //查询歌手信息 
{
	char b[20];
	printf("请输入要查询歌手姓名:");
	scanf("%s",b);
	int i,j,flag=1;
	for(i=0;i<l;i++)
	{
		if(strcmp(a[i].name,b)==0)  //输出歌手信息 
		{
			printf("该歌手编号是:%d",a[i].num);  
			printf("\n");
			printf("该歌手成绩是:");
			for(j=0;j<5;j++)
			{
			printf("%4d",a[i].score[j]);} 
			printf("\n");
			printf("该歌手总成绩是:%d\n",a[i].total);
			printf("该歌手平均成绩是:%.2lf\n",a[i].aver);
			flag=0;
			break;
		}	
	}
	if(flag)    
	printf("未找到该歌手\n"); 
}
void inist(struct people a[])  //插入新增歌手信息 
{
	int i,max,min;
	l=l+1; 
	printf("请输入选手编号:");  //输入新增歌手的基本信息 
	scanf("%d",&a[l-1].num);
	printf("请输入选手姓名:");
	scanf("%s",a[l-1].name);
	for(i=0;i<5;i++)
	{
	printf("请输入第%d位评委的打分:",i+1);
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
void wenjian(struct people a[]) //将歌手数据写入系统文件 
{
	FILE*fp;
	int i;
	if((fp=fopen("D:\\歌手比赛数据.txt","w"))==NULL)
	{
		printf("无法打开次文件");
		exit(0); 
	}
	for(i=0;i<l;i++)
	{
		fprintf(fp,"%d\t%s\t%.2lf\t%d\n",a[i].num,a[i].name,a[i].aver,a[i].total);
	}
	fclose(fp);
	printf("歌手数据已写入系统文件\n"); 
}
void delet(struct people a[])
{
	int i,t,m;
	printf("请输入要删除歌手编号：");
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
	printf("请输入要修改歌手的编号:");
	scanf("%d",&m);
	for(i=0;i<l;i++)
	if(a[i].num==m)
	t=i;
	printf("请输入歌手姓名:");
	scanf("%s",a[t].name); 
	for(j=0;j<5;j++)
		{
			printf("请输入第%d位评委的打分：",j+1);
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
	 

void show()     //输出菜单 
{
	int k;
	char i[10];
	do{
	
	printf("\t1.输入歌手信息\n");
	printf("\t2.输入评委打分\n");
	printf("\t3.按成绩排序\n");
	printf("\t4.按姓名查找\n");
	printf("\t5.要删除的歌手信息\n"); 
	printf("\t6.要修改歌手信息\n");
	printf("\t7.插入选手数据\n");
	printf("\t8.写入数据文件\n");
	printf("\t9.退出系统\n");
	printf("****************************************");
	printf("\n");
	printf("请选择(1-9):");
	scanf("%d",&k);
	while(1)
	{if(k>9||k<=0)
	{
	printf("输入错误！！！请重新输入:");
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
	printf("如果继续，输入任意，如果退出，请输入0：");
	scanf("%s",i);
	if(i==0)
	k=9;
	printf("\n");}
}
while(k!=9);
}
int main()     //主函数 
{
	printf("---------------------------------------\n");
	printf("\t欢迎使用歌手评分系统\n");
	printf("---------------------------------------\n");
	show();
}
