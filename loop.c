#include<stdio.h>
int main()
{	
int a,b,c=0,sum=0 ,small,large,i;
	printf("Enter two number:\n");
	scanf("%d%d",&a,&b);
	
	if(a<=b)
	{
	small=a,large=b;
	}
	else{
		small=b,large=a;
	}
	
	for(i=small;i<=large;i++){
	
	if(i%13==0)
	{
		printf("%d\n",i);
		c=c+1;
		sum=sum+i;
	}
	printf("Total numbers divisible by 13: %d\n", c);
	printf("the sum of numbers in the range: %d\n",sum);
	return 0;
	
}
}




















