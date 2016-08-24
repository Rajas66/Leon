#include<stdio.h>
void main()
{
    int input,n,i=1,sum;
    scanf("%d",&input);
    sum=1;
    for(i=1;i<=input;i++)
    {
        sum=sum*i;
    }
    printf("%d",sum);
}
