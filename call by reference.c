#include<stdio.h>
void swap(int* ,int*);
int main()
{
	int a,b;
	printf("Enter the values of a and b values:");
	scanf("%d %d",&a,&b);
	printf("\n Before main() swap a=%d,b=%d",a,b);
	swap(&a,&b);
	printf("\n After main() swap a=%d,b=%d",a,b);
}
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
	printf("\n Inside swap() function a=%d,b=%d",*a,*b);
}