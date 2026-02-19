#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter value of a and b:\n");
	scanf("%d%d",&a,&b);
	printf("Value of a and b before swapping is %d\t%d",a,b);
	
	swap(&a,&b);
	printf("\n");
	printf("Value of a and b after swapping is %d\t%d",a,b);
	return 0;
}
int swap(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}
