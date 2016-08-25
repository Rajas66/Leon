#include<stdio.h>
void main()
{
    char st[100];
    int len,i;
    scanf("%s",&st);
    len=strlen(st);
    for(i=len-1;i>=0;i--)
    {
        if(st[i] == 'a' || st[i] == 'e' || st[i] == 'i' || st[i] == 'o' || st[i] == 'u' || st[i] == 'A' || st[i] == 'E' || st[i] == 'I' || st[i] == 'O' || st[i] == 'U')
        {

        }
        else
        {
            printf("%c",st[i]);
        }
    }
}
