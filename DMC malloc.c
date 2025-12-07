#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,*P;
	printf("Enter size:");
	scanf("%d",&n);
	P=(int*)malloc(n*sizeof(int));
	if(P==NULL)
	{
		printf("memory is not allocated\n");
		return 0;
	}
	printf("enter the numbers:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",P+i);
	}
	printf("you entered:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(P+i));
	}
	free(P);
	return 0;
}
