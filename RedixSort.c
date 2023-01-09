//redix sort

 #include<stdio.h>
void rsort(int x[],int n,int div)
{
	int y[n];
	int a[10]={0};
	int i,j;
	for(i=0;i<n;i++)
	{
		a[(x[i]/div)%10]++;
	}
	for(i=1;i<10;i++)
	{
		a[i]+=a[i-1];
	}
	for(j=n-1;j>=0;j--)
	{
		y[a[(x[j]/div)%10]-=1]=x[j];
	}
	for(i=0;i<n;i++)
	{
		x[i]=y[i];
	}
}
void show(int x[],int n)
{
	int i;
	int max=x[0];
	for(i=1;i<n;i++)
		if(max<x[i])max=x[i];
	for(i=1;i<=max;i*=10)
		rsort(x,n,i);
}
void main()
{
int x[]={123,218,654,322,765,576,931,476,827};
show(x,9);
int i;
for(i=0;i<9;i++)
{
	printf("%d\n",x[i]);
}	
}