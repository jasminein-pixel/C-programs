#include<stdio.h>
void srk(int a[],int s);
int main()
{
	int a[]={67,66,97,89},i;
	srk(a,4);
	for(i=0;i<4;i++)
	printf("%d\n",a[i]);
}
void srk(int a[],int s)
{
	int i,j,t;
	for(i=1;i<s;i++)
	{
		for(j=0;j<s-i;j++)
		{
			if(a[j]<a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}
