#include<stdio.h>
struct student{
	char name[20];
	int roll;
	float marks;
};

int main()
{
	struct student s[10];
	struct student temp;
	int i,j,n;
	printf("enter no. of students:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter name, roll no and marks of a student:");
		scanf("%s%d%f",s[i].name,&s[i].roll,&s[i].marks);
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++){
			if(s[j].roll>s[j+1].roll)
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}
		for(i=0;i<n;i++)
	{
		printf("The records in ascending order according to roll no is %s\n %d\n %f\n",s[i].name,s[i].roll,s[i].marks);
	}
}

