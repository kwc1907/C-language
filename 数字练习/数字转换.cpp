#include<stdio.h>
void xs(int a)
{
if(a==0) printf("零");
else if(a==1) printf("壹");
else if(a==2) printf("贰");
else if(a==3) printf("叁");
else if(a==4) printf("肆");
else if(a==5) printf("伍");
else if(a==6) printf("陆");
else if(a==7) printf("柒");
else if(a==8) printf("捌");
else if(a==9) printf("玖");
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
printf("请输入人民币小写数额:");
printf("\n");
scanf("%lf",&i);
//万以上部分
j1=(int)i/10000000;
k1=(int)i%10000000/1000000;
m1=(int)i%10000000%1000000/100000;
n1=(int)i%10000000%1000000%100000/10000;
//万以下部分
j=(int)i%10000000%1000000%100000%10000/1000;
k=(int)i%1000/100;
m=(int)i%1000%100/10;
n=(int)i%1000%100%10;
//小数部分
g=(int)(i*10)%10000%1000%100%10;
h=(int)(i*100)%100000%10000%1000%100%10;
if(i>=10000&&i<100000000)
{
printf("转化为大写金额应为：\n");
xs(j1);
printf("仟");
xs(k1);
printf("佰");
xs(m1);
printf("拾");
xs(n1);
printf("万");
xs(j);
printf("仟");
xs(k);
printf("佰");
xs(m);
printf("拾");
xs(n);
printf("元");
xs(g);
printf("角");
xs(h);
printf("分");
printf("\n");
}
else if(i<10000&&i>=0)
{
printf("转化为大写金额应为：\n");
xs(j);
printf("仟");
xs(k);
printf("佰");
xs(m);
printf("拾");
xs(n);
printf("元");
xs(g);
printf("角");
xs(h);
printf("分");
printf("\n");
}
else
{printf("您所输入的数值超出范围！！\n");
printf("输入1重新开始\n");
printf("输入0结束程序\n");
scanf("%d",&y);
printf("\n");
printf("\n");
}
}
} 
