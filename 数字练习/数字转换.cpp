#include<stdio.h>
void xs(int a)
{
if(a==0) printf("��");
else if(a==1) printf("Ҽ");
else if(a==2) printf("��");
else if(a==3) printf("��");
else if(a==4) printf("��");
else if(a==5) printf("��");
else if(a==6) printf("½");
else if(a==7) printf("��");
else if(a==8) printf("��");
else if(a==9) printf("��");
}
int main()
{
int y=1;
while(y)
{
double i;
int j,j1;
int k,k1;
int m,m1;
int n,n1;
int g,g1;
int h,h1;
printf("�����������Сд����:");
printf("\n");
scanf("%lf",&i);
//�����ϲ���
j1=(int)i/10000000;
k1=(int)i%10000000/1000000;
m1=(int)i%10000000%1000000/100000;
n1=(int)i%10000000%1000000%100000/10000;
//�����²���
j=(int)i%10000000%1000000%100000%10000/1000;
k=(int)i%1000/100;
m=(int)i%1000%100/10;
n=(int)i%1000%100%10;
//С������
g=(int)(i*10)%10000%1000%100%10;
h=(int)(i*100)%100000%10000%1000%100%10;
if(i>=10000&&i<100000000)
{
printf("ת��Ϊ��д���ӦΪ��\n");
xs(j1);
printf("Ǫ");
xs(k1);
printf("��");
xs(m1);
printf("ʰ");
xs(n1);
printf("��");
xs(j);
printf("Ǫ");
xs(k);
printf("��");
xs(m);
printf("ʰ");
xs(n);
printf("Ԫ");
xs(g);
printf("��");
xs(h);
printf("��");
printf("\n");
}
else if(i<10000&&i>=0)
{
printf("ת��Ϊ��д���ӦΪ��\n");
xs(j);
printf("Ǫ");
xs(k);
printf("��");
xs(m);
printf("ʰ");
xs(n);
printf("Ԫ");
xs(g);
printf("��");
xs(h);
printf("��");
printf("\n");
}
else
{printf("�����������ֵ������Χ����\n");
printf("����1���¿�ʼ\n");
printf("����0��������\n");
scanf("%d",&y);
printf("\n");
printf("\n");
}
}
} 
