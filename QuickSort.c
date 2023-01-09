#include<stdio.h> 
void show(int x[],int si,int n);
int qsort(int x[],int si,int n);
void main()
{
	int x[]={35,33,42,10,14,19,27,44,26,31};
     int n=9; 
    show(x,0,n);
  for(int i=0;i<n;i++)
   {
	   printf("%d  ",x[i]);
   }
	   printf("\n ");
} 
void show(int x[],int si,int n)
{
	if(n<=si)return;
	int i=qsort(x,si,n);
    show(x,si,i-1);
    show(x,i+1,n);
}
int qsort(int x[],int si,int n)
{
	int i=si,p=si,pivot=x[n];
	int t;
	for(;p<n;p++)
	{
		if(x[p]<pivot)
		{
			t=x[p];
			x[p]=x[i];
			x[i]=t;
			i++;
		}
	}
	x[n]=x[i];
	x[i]=pivot;
  return i;
}