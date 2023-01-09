//shell sort

#include<stdio.h>
void display(int x[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ",x[i]);
	printf("\n");
}
void isort(int x[],int n)
{
	int i,j;
int value;
for(i=1;i<n;i++)
{ 
value=x[i];
	for(j=i;j>0 && value<x[j-1];j--)
	{
		x[j]=x[j-1];
	}
	x[j]=value;
}
}
void csort(int x[],int n,int g)
{
	int i,t;
	for(;g>1;)
	{
		if(g==9 || g==10)g=11;
		for(i=0;i<(n-g);i++)
		{
			if(x[i]>x[g+i])
			{
				t=x[i];
				x[i]=x[g+i];
				x[g+i]=t;
			}
		}
		g=g/2;
	}
	
display(x,n);
printf("\n...............\n");
	isort(x,n); 
}
void main()
{
	int x[]={4,0,2,3,7,1,8,5,9,16};
	int n=10;
	csort(x,n,10/2);
    display(x,n);
}