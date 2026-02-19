#include<stdio.h>
float avg(int *a,int s);
int main()
{
	int x[100],k,n;
	printf("Enter size of array:");
	scanf("%d",&n);
	for(k=0;k<n;k++)
	scanf("%d",&x[k]);
	printf("\nAverage is %f",avg(x,n));
	
}
float avg(int *a,int s)
{
	int i,sum=0;
	for(i=0;i<s;i++)
	sum=sum+*(a+i);
	return ((float)sum/s);
}
