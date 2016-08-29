#include<stdio.h>
void main()
{
    char alpha[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char alpha1[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int as[26],flag=0,i,j,n;
    char input[1000];
    scanf("%s",&input);
    int len=strlen(input);
    for(i=0;i<26;i++)
    {
        flag=0;
        for(j=0;j<len;j++)
        {
            if(alpha[i] == input[j] || alpha1[i] == input[j])
            {
                flag=1;
                break;
            }
        }
        if(flag == 0)
        {
            printf("Its not Pangram\n");
            break;
        }
    }
    if(flag == 1)
    {
        printf("Its Pangram\n");
    }

}
