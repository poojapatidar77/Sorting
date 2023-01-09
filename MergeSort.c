//merge sort

#include<stdio.h>
void msort(int x[],int a[],int m1,int b[],int m2);
void show(int x[],int n)
{
	if(n<2)return;
	int m1=n/2;
	int m2=n-m1;
	int a[m1];
	int b[m2];
	int i,j;
	for(i=0;i<m1;i++)
	{
		a[i]=x[i];
	}
	for(i=0;i<m2;i++)
	{
		b[i]=x[m1+i];
	}
	show(a,m1);
	show(b,m2);
	msort(x,a,m1,b,m2);
	
}
void msort(int x[],int a[],int m1,int b[],int m2)
{
	int i,j,k;
	for(i=0,j=0,k=0;i<m1&&j<m2;)
	{
		if(a[i]<b[j])x[k++]=a[i++];
		else x[k++]=b[j++];
	}
	if(i<m1)x[k++]=a[i++];
	if(j<m2)x[k++]=b[j++];
}
void main()
{
	int x[]={12,45,11,9,87,66,22,48,19,4};
	int n=10;
	int i;
	show(x,n);
	for(i=0;i<n;i++)
	{
		printf("%d  ",x[i]);
	}
}