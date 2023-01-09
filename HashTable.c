//hash table

#include<stdio.h>
#define capacity 10
int x[capacity];
void init()
{
	for(int i=0;i<capacity;i++)
		x[i]=-1;
}
int hashcode(int k)
{
	return k%capacity;
}
void insert(int v)
{
	x[hashcode(v)]=v;
}
void search(int v)
{
	if(x[hashcode(v)]==v)
		printf("data is found\n");
	else 	printf("data is not found\n");
}
void showall()
{
	int i,j;
	for(i=0;i<capacity;i++)
		printf("  %d\n",x[i]);
}
void main()
{
	init();
	insert(5);
	insert(1);
	insert(4);
	insert(7);
	insert(2);
	showall();
	search(1);
	search(10);
}