#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	char bin[10];
	int i;
	
	printf("Enter binary number:");
gets(bin);
	int len=strlen(bin);
	printf("%d",strlen(bin));
	int decimal=0;
	for(i=0;i<len;i++)
	{
	if(bin[i]=='1')
	{
		printf("%c",bin[i]);
		decimal+=pow(2,len-(len-i));
	}
}
printf("the value in decimal is %d",decimal);
return 0;
}
