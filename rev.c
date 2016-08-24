#include<stdio.h>
void main()
{
    int in,n,i;
    scanf("%d",&in);
    while(in>0)
    {
        printf("%d",in%10);
        in=in/10;
    }
}
