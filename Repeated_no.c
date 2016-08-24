#include<stdio.h>
void main()
{
    int stack[1000],n,l,i,j,k,temp,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&stack[i]);
    }
    for(i=0;i<n-1;i++)
    {
        flag=0;
        temp=stack[i];
        for(j=i+1;j<n;j++)
        {
            if(temp == stack[j])
            {
               flag=1;
               break;
            }
        }
        if(flag == 1)
        {
            printf("%d ",temp);
        }
    }
}
