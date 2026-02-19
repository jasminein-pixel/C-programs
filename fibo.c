#include<stdio.h>
void main()
{
	int a=0,b=1,c,i,n;
	printf("Enter a num:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d\t",a);
		c=a+b;
	    a=b;
     	b=c;
	   
}
}
