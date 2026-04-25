#include <stdio.h>
#include<string.h>
void main()
{
char str[10];
printf("enter the string:\n");
scanf("%s",str);
for(int i=0;i<=strlen(str)-1;i++)
{
    if(!(str[i]>='0'&&str[i]<='9'))
    {
        printf("%c\t",str[i]);
    }
}
}

     