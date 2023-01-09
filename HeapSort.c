//Heap sort
 
#include<stdio.h> 
 void show(int x[],int n,int i)
 {
	 int l=i*2+1;
    int r=l+1;
	int t,max=i;
	if(r<n)
	{
		if(x[max]<x[l])max=l;
		if(x[max]<x[r])max=r;
	}
	else if(l<n)
	{
		max=l;
	}
	if(x[max]>x[i])
	{
		t=x[i];
		x[i]=x[max];
		x[max]=t;
		show(x,n,max);
	}
   	
 }
 void show1(int x[],int n)
 {
	 int i;
	 for(i=(n/2-1);i>=0;i--)
	 {
		 show(x,n,i);
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
		 show(x,i,0);
	 }
 }
void display(int x[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d  ",x[i]);
	}
	printf("\n");
}
void main()
{
	int x[]={12,45,11,9,87,66,22,48,19,4};
 	int n=10;
	show1(x,n);
	deletedemo(x,n);
	display(x,n);
	 
}