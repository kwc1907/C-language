#include<stdio.h>
int main()
{
	float ave(float s[5]);
	int i,t=0,j;
	float a[5],pin;
	int z=0;
	char names[5][20];
	float m=0,q=0,w=0,e=0;
	printf("请输入学生姓名：\n"); 
	for(i=0;i<5;i++)
	{
		scanf("%s",&names[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("请输入学生成绩："); 
		scanf("%f",&a[i]);
		if(a[i]<0)
		{
			break;
		}
	}
	printf("姓名\t成绩\n"); 
	for(i=0;i<5;i++)
		printf("%s\t%.2f\n",names[i],a[i]);
	printf("不及格的有："); 
	for(i=0;i<5;i++)
	{
		if(a[i]<60)
		{
			t++;
			printf("%s\t",names[i]);
		}
	}
	printf("\n\n不及格共%d人。\n",t);
	printf("\n平均分以上的人有："); 
	for(i=0;i<5;i++)
	{
		if(a[i]>ave(a))
		{
			z++;
			printf("%s\t",names[i]);
		}
	}
	printf("\n\n在平均分以上人共%d人。\n\n",z);
	for(i=0;i<5;i++)
	{
		if(a[i]<60)
		{
			m++;
		}
		else if(a[i]<74)
		{
			q++;
		}
		else if(a[i]<84)
		{
			w++;
		}
		else 
		{
			e++;
		}	
	}
	printf("\t\t<60\t>60,<=75\t>75,<=85\t>85,<=100"); 
	printf("\n学生各分段人数: %.1f\t%.1f\t\t%.1f\t\t%.1f\n",m,q,w,e);
	printf("学生所占百分比: %.1f%%\t%.1f%%\t\t%.1f%%\t\t%.1f%%\n",(m/5)*100,(q/5)*100,(w/5)*100,(e/5)*100);	
} 
float ave(float s[5])
{
	int k;
	float aver,sum=0;
	for(k=0;k<5;k++)
		sum=sum+s[k];	
	aver=sum/5.0;
	return(aver);
} 
