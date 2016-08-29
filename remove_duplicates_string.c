#include<stdio.h>
void main()
{
    char ch[1000];
    int i,j,n,flag=0;
    scanf("%s",&ch);
    int len=strlen(ch);
    for(i=0;i<len-1;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(ch[i] == ch[j])
            {
                ch[j]='0';
            }
        }

    }
    for(i=0;i<len;i++)
    {
        if(ch[i] != '0')
        {
            printf("%c",ch[i]);
        }
    }

}
