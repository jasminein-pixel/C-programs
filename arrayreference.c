#include<stdio.h>
int main()
{
	int arr[5];
	int i;
	for(i=0;i<5;i++)
	{
	printf("Enter the value for array element:");
	scanf("%d",&arr[i]);
}
	array(arr,5);
	for(i=0;i<5;i++)
	printf("\n%d",arr[i]);
}
void array(int a[],int s)
{
	int i;
	for(i=0;i<5;i++)
	a[i]++;
}


