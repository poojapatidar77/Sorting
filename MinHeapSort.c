#include<stdio.h>
void display(int x[],int n);
void show(int x[],int i,int n)
{
	int t;
	int l=i*2+1;
	int r=l+1;
	int max=i;
	if(r<n)
	{
	if(x[l]<x[max])max=l;
	if(x[r]<x[max])max=r;
	}
	else if(l<n)
	{
	max=l;
	}
	if(x[max]<x[i])
	{
		t=x[max];
		x[max]=x[i];
		x[i]=t;
		show(x,max,n);
	}
	
}
void show1(int x[],int n)
{
	int i;
	for(i=(n/2-1);i>=0;i--)
	{
		show(x,i,n);
	}
}
void deletedemo(int x[],int n)
{
	int i,t;
	for(i=--n;i>=0;i--)
	{
		t=x[0];
		x[0]=x[i];
		x[i]=t;
		show(x,0,i);
	}
}
void main()
{
	int x[]={12,11,87,34,33,46,2};
   int n=7;
   show1(x,n);
   deletedemo(x,n);
   display(x,n);
}

void display(int x[],int n)
{
	
   for(int i=0;i<n;i++)
   {
	   printf("%d  ",x[i]);
   }
	   printf("\n ");
   
}