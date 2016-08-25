#include<stdio.h>
void main()
{
    char alpha[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char as[1000];
    int value[26],sum=0;
    int size,i,j,n;

    scanf("%s",&as);
    size=strlen(as);
    for(i=0;i<26;i++)
    {
        sum=0;
        value[i]=0;
        for(j=0;j<size;j++)
        {
            if(alpha[i] == as[j])
            {
                value[i]++;
                sum++;
            }
        }
        if(sum != 0)
        {
            printf("%c%d",alpha[i],value[i]);
        }
    }
}
