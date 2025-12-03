#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,*ptr,i,m;
	printf("enter n value:");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
    *(ptr+i)=i+10;
printf("after malloc/calloc elements addresses are:\n");
for(i=0;i<n;i++)
printf("%d=%d\n",ptr+i,*(ptr+i));
printf("Enter updated array size:");
scanf("%d",&m);
	for(i=n;i<m;i++)
	    *(ptr+i)=i+10;
for(i=0;i<m;i++)
    printf("%d=%d\n",ptr+i,*(ptr+i));
free(ptr);
printf("\n after free memory elements are:\n ");
for(i=0;i<m;i++)
{
	printf("%d=%d\n",ptr,*(ptr+i));
}
return 0;
}
