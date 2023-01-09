 //selection sort
 
 
 #include<stdio.h> 
void display(int x[],int n);
void ssort(int x[],int n)
{
	int i,t,j,max;
	for(i=0;i<n-1;i++)
	{
		max=i;
		for(j=i+1;j<n;j++)
		{
			if(x[j]<x[max])max=j;
		}
		if(i!=max)
		{
			t=x[i];
			x[i]=x[max];
			x[max]=t;
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
	ssort(x,n); 
}