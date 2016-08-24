#include<stdio.h>
void main()
{
    char asd[1000],c;
    int i,len;
    scanf("%s",&asd);
    len=strlen(asd);
    for(i=0;i<len-1;i++)
    {
        c=asd[i];
        asd[i]=asd[i+1];
        asd[i+1]=c;
        i++;
    }
    for(i=0;i<len;i++)
    {
        printf("%c",asd[i]);
    }
}
