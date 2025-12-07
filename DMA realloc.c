#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	int i;
	p=(int*)malloc(3*sizeof(int));
	for(i=0;i<3;i++)
	p[i]=i+1;
	p=(int*)realloc(p,5*(sizeof(int)));
	for(i=3;i<5;i++)
	p[i]=i+1;
	printf("after realloc:\n");
	for(i=0;i<5;i++)
	printf("%d ",p[i]);
	free(p);
	return 0;
	
}