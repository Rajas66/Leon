#include<stdio.h>
void main()
{
    int n,l,i,j,k,temp,flag=0,check;
    scanf("%d",&n);
    int stack[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&stack[i]);
    }
    while(1)
    {
        flag=0;
        for(i=0;i<n-1;i++)
        {
            if(stack[i] > stack[i+1])
            {
                check=stack[i];
                stack[i]=stack[i+1];
                stack[i+1]=check;
            }
        }
        if(flag == 0)
        {
            break;
        }
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
