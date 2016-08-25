#include<stdio.h>
void main()
{
    int que[1000],inc,j,k,n,temp1,l;
    scanf("%d %d ",&n,&k);
    for(inc=0;inc<n;inc++)
    {
        scanf("%d",&que[inc]);
    }
    temp1=n-k;
    for(inc=0;inc<n;inc++)
    {
        l=temp1%n;
        printf("%d ",que[l]);
        temp1++;
    }
}
