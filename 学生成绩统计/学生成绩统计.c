#include<stdio.h>
int main()
{
	float ave(float s[5]);
	int i,t=0,j;
	float a[5],pin;
	int z=0;
	char names[5][20];
	float m=0,q=0,w=0,e=0;
	printf("������ѧ��������\n"); 
	for(i=0;i<5;i++)
	{
		scanf("%s",&names[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("������ѧ���ɼ���"); 
		scanf("%f",&a[i]);
		if(a[i]<0)
		{
			break;
		}
	}
	printf("����\t�ɼ�\n"); 
	for(i=0;i<5;i++)
		printf("%s\t%.2f\n",names[i],a[i]);
	printf("��������У�"); 
	for(i=0;i<5;i++)
	{
		if(a[i]<60)
		{
			t++;
			printf("%s\t",names[i]);
		}
	}
	printf("\n\n������%d�ˡ�\n",t);
	printf("\nƽ�������ϵ����У�"); 
	for(i=0;i<5;i++)
	{
		if(a[i]>ave(a))
		{
			z++;
			printf("%s\t",names[i]);
		}
	}
	printf("\n\n��ƽ���������˹�%d�ˡ�\n\n",z);
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
	printf("\nѧ�����ֶ�����: %.1f\t%.1f\t\t%.1f\t\t%.1f\n",m,q,w,e);
	printf("ѧ����ռ�ٷֱ�: %.1f%%\t%.1f%%\t\t%.1f%%\t\t%.1f%%\n",(m/5)*100,(q/5)*100,(w/5)*100,(e/5)*100);	
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
