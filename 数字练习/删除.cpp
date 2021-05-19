#include<stdio.h>
int main()
{
	int fun(int *p,int i,int n); 
	int j,t,a[5]={21,25,69,56,35},i;
	scanf("%d",&i);
	t=fun(a,i,5);
	if(t)
	for(j=0;j<4;j++)
	printf("%-5d",a[j]);
	else printf("wucishu");
	
 }
 int fun(int *p,int i,int n) 
 {
 	int t=0, *m;
 	m=p;
 	for(;m<p+5;m++)
 	{
 		if(i==*m)
 	{
	  for(i=0;m+i<p+n;i++)
	 {
		*(m+i)=*(m+i+1); 
	 }
	 t=1; break;}
}
	return t;
	 
 }
