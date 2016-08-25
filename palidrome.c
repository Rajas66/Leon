#include<stdio.h>
void main()
{
    char set[1000];
    int len,i,flag=0;
    scanf("%s",&set);
    len=strlen(set);
    for(i=0;i<len-1;i++,len--)
    {
        if(set[i] != set[len-1])
        {
            flag=1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Palindrome\n");
    }
}
