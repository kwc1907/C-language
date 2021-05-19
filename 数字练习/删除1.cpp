#include<stdio.h>
int main()
{
	void del(int *p,int n,int a);
	int i,a[5],*p=a,n;
	for(i=0;i<5;i++)
	scanf("%d",p++);
	p=a;
	printf("请输入要删除的数字："); 
	scanf("%d",&n);
	del(a,n,5); 
 } 
void del(int *p,int n,int a) 
 {
 	int z[5],*t=z,j,i,m[5];
 	for(i=0;i<a;i++)
 	if(n==*(p+i))
 	m[i]=1;
 	else m[i]=0;
 	for(i=0;i<a;i++)
 	if(m[i]==0)
	 *t++=*(p+i);
	 for(i=0;i<a;i++)
 	if(m[i]==0)
 	j++;
 	t=z;
 	for(i=0;i<j;i++)
 	printf("%d\t",*t++);
	 
 }
