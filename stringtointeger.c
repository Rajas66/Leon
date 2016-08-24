#include<stdio.h>
void main()
{
    char s[100];
    int i,len;
    scanf("%s",&s);
    len=strlen(s);
    for(i=0;i<len;i++)
    {
        printf("%d",(s[i]-48));
    }
}
