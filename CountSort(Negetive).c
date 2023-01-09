//count sort for negative value

#include<stdio.h>
void csort(int x[],int n)
{
 	int y[n];
	int i;
	int min=x[0];
	int  max=x[0];
	for(i=1;i<n;i++)
	{
		if(min>x[i])min=x[i];
		if(max<x[i])max=x[i];
	}
	max=max-min;
	max++;
	int a[max];
	for(i=0;i<max;i++)
	{
    a[i]=0;
	}
	for(i=0;i<n;i++)
	{
		a[x[i]-min]++;
	}
	for(i=1;i<max;i++)
	{
		a[i]+=a[i-1];
	}
	for(i=0;i<n;i++)
	{
		y[a[x[i]-min]-=1]=x[i];
	} 
	for(i=0;i<n;i++)
	{
		printf("%d  ",y[i]);
    }
}
void main()
{
	int x[]={-9,6,-1,3,7};
	int n=5;
	csort(x,n);
	
}