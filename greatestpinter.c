#include<stdio.h>
int main()
{
	int a=9;
	int b=10;
	int c;
	c=great(&a,&b);
	printf("greatest is %d",c);
}
int great(int *x,int *y)
{
	if(*x>*y)
	{
		return *x;
	}else{
		return *y;
	}
}
