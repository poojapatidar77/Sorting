//comb sort

#include<stdio.h>
void display(int x[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ",x[i]);
	printf("\n");
}
void csort(int x[],int n,int g)
{
	int i,t;
	for(;g>=1;)
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
		g=g/1.3;
	}
	display(x,n);
}
void main()
{
	int x[]={4,0,2,3,7,1,8,5,9,16};
	int n=10;
	csort(x,n,10/1.3);
}