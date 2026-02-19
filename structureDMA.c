#include<stdio.h>
#include<stdlib.h>
typedef struct
{
	char name[20];
	int roll;
	float marks;
}student;

int main()
{
	 student *s;
	 student temp;
	int i,j,n;
	printf("enter no. of students:");
	scanf("%d",&n);
	s=(student*)malloc(n*sizeof(student));
	{
		if(s==NULL){
			printf("Error allocating memory");
		}
		else
		{
		for(i=0;i<n;i++)
	{
		printf("Enter name, roll no and marks of a student:");
		scanf("%s%d%f",s[i].name,&s[i].roll,&s[i].marks);
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++){
			if(s[j].marks<s[j+1].marks)
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}
			
			for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++){
			if(s[j].marks=s[j+1].marks)
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
		printf("The records in ascending order according to marks no is %s\n %d\n %f\n",s[i].name,s[i].roll,s[i].marks);
	}
}}
free(s);

}

