#include<stdio.h>
int fib(int n)
{
	if(n==0)
	return 0;
	if(n==1)
	return 1;
	else
	return fib(n-1)+fib(n-2);
}
int main()
{
	int term,i;
	printf("how many terms ?");
	scanf("%d",&term);
	printf("the fibonacci series :\t");
	for(i=0;i<terms;i++)
	{
		printf("%d\t",fib(i));
	}
	return 0:
}
