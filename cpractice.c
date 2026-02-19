#include <stdio.h>
#include <string.h>
int main()
{
char s[10];
printf("enter the sentence");
fgets(s);
int i=0,count=0;
while (s[i]!='\0')
{
    if (s[i]!=' ')
    {
        count++;
    }
}
printf("the no. of characters are :%d",count);
return 0;
}