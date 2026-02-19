#include<stdio.h>
#include<string.h>
int main()
{
	char password[20];
	int attempt=0;
	int cmp;
	
	do{
	printf("Enter password:\n");
	scanf("%s",&password);
	attempt++;
	cmp=strcmp(password,"CE@123");
	if(cmp==0)
	{
		printf("Access granted.");
		return 0;
	}
}
	while(attempt<3);
	printf("Access Denied.");
	return 0;

}
