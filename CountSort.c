//count sort


#include<stdio.h>
void csort(int x[],int n)
{
	int a[10]={0};
	int y[n];
	int i;
	for(i=0;i<n;i++)
	{
		a[x[i]]++;
	}
	for(i=1;i<10;i++)
	{
		a[i]+=a[i-1];
	}
	for(i=0;i<n;i++)
	{
		y[a[x[i]]-=1]=x[i];
	} 
	for(i=0;i<n;i++)
	{
		printf("%d  ",y[i]);
    }
}
void main()
{
	int x[]={9,6,1,3,7};
	int n=5;
	csort(x,n);
	
}