//insertion sort
 
#include<stdio.h> 
void display(int x[],int n);
void ssort(int x[],int n)
{
	int i,t,j,max;
	for(i=1;i<n;i++)
	{
		max=x[i];
		for(j=i;j>0 && max<x[j-1];j--)
		{
			x[j]=x[j-1];
		}
		 if(x[j]!=max)
		 {
			x[j]=max;
			display(x,n);
	}
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
	display(x,n);
	ssort(x,n); 
}