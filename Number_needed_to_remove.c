#include<stdio.h>
void main()
{
    int a[1000],i,j,n,value;
    scanf("%d",&n);
    scanf("%d",&value);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i] != value)
        {
                printf("%d ",a[i]);
        }
    }
}
