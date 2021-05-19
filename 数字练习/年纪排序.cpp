#include<stdio.h>
int ad[30][2],aver[30];
int main()
{
	void addage(int a[][4],int n);
	void sort(int n);
	int i,t,j,a[30][4]={1,15,45,87,2,98,56,52,3,25,21,87,4,98,45,56,5,10,36,23};
	for(i=0;i<30;i++)
	{	if(a[i][0]==0)
		{t=i;break;}
		if(i==29)
		t=30;
	}
	addage(a,t);	
	sort(t);
	for(i=0;i<t;i++)
	for(j=0;j<2;j++)
	printf("%5d",ad[i][j]);
}
void addage(int a[][4],int n)
{
 	int i,j,sum=0;
 	for(i=0;i<n;i++)
 	{
	 for(j=1;j<4;j++)
 	{
 		sum+=a[i][j];
 	}
 		ad[i][1]=sum;
 		sum=0;
}
	 for(i=0;i<n;i++)
	 	aver[i]=ad[i][1]/3;
	 	for(i=0;i<n;i++)
	 	ad[i][0]=i+1;
}
void sort(int n)
{
	int i,j,k,t;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(ad[k][1]<=ad[j][1])
			k=j;
		}
		t=ad[k][1];ad[k][1]=ad[i][1];ad[i][1]=t;
		t=ad[k][0];ad[k][0]=ad[i][0];ad[i][0]=t;
	}
}

































