#include<stdio.h>
void swap(int *x,int*y);
int main()
	{
	int a,b;
	printf("Enter value of a and b");
	scanf("%d %d",&a,&b);
	swap(&a,&b)	;
	printf("The value of a and b after swapping is %d %d",a,b);
	}
	void swap(int *x,int*y)
		{
		int temp;

	temp=*x;
	*x=*y;
	*y=temp;
}

