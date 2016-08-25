#include<stdio.h>
void main()
{
    int a[1000],i=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i] == i)
        {
            printf("%d ",a[i]);
        }
    }
}
