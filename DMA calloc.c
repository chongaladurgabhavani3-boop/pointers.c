#include<stdio.h>
#include<stdio.h>
int main()
{
	int *p,i;
	p=(int*)calloc(4,sizeof(int));
	if(p==NULL)
	{
		printf("memory is not allocated\n");
		return 0;
	}
	printf("values after calloc:\n");
	for(i=0;i<4;i++)
	{
		printf("%d",*(p+i));
	}
	free(p);
	return 0;
	
	
	
}